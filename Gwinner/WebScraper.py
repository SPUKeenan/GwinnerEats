# This Python file uses the following encoding: utf-8
import string
import os

from bs4 import BeautifulSoup
import requests
import csv

url = 'https://menus.sodexomyway.com/BiteMenu/Menu?menuId=15339&locationId=55941001&whereami=http://spu.sodexomyway.com/dining-near-me/gwinn-commons-dining-hall'
page = requests.get(url)
soup = BeautifulSoup(page.content, 'html.parser')
results: string = []

# class WebScraper:


# def __init__(self):
# pass

# def getBreakfast():
meals = ["breakfast", "lunch", "dinner"]

# For each item with the specific class that is an a element
for option in meals:
    for i in soup.find_all('div', class_=option):
        # Get the parents
        for child in i.descendants:
            try:
                if child is None:
                    continue
                # if one exists
                elif len(child.contents) >= 0:
                    for tag in child.contents:
                        #print("Child p", tag.string)
                        #if tag.p['data-fooditemname']:
                            # See if it contains the breakfast class
                        #print("Child classes", tag.p['data-fooditemname'])
                            # if child.contains("get-nutritioncalculator"):
                            # if so, add it to the results list
                        if tag.string is not None \
                                and tag.string != "" \
                                and not(tag.string[0] == '/') \
                                and tag.string != '\n' \
                                and tag.string != '-' \
                                and tag.string != "HAVE A GREAT DAY!" \
                                and not ("cal" in tag.string):
                            print(tag.string)
                            results.append(tag.string)
                            break
                        break
            except:
                continue
# writeFile(results)

# def writeFile(writeResults):

with open(os.path.dirname(os.path.abspath(__file__))+"\\food.csv", "w", encoding="utf8") as file:
    foodWriter = csv.writer(file, delimiter=',', quotechar='"', quoting=csv.QUOTE_MINIMAL)

    #print("Working in", i)

    foodWriter.writerows([c.strip() for c in r.strip(', ').split(',')]
                     for r in results)

file.close()
