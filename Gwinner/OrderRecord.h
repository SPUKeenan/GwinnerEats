#ifndef ORDERRECORD_H
#define ORDERRECORD_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <iostream>
#include <string>

using namespace std;

class OrderRecord
{
private:
    string dormName,customerName,creditCardInfo,paymentAddress, dayOfWeek, typeOfMeal;
    int roomNum,phoneNum,time,studentIDnum;
    string deliveryNotes;

public:
    OrderRecord();
    string GetDormName();
    void SetDormName(string hallname);
    string GetCustomerName();
    void SetCustomerName(string name);
    string GetCreditCardInfo();
    void SetCreditCardInfo(string cardInfo);
    string GetPaymentAddress();
    void SetPaymentAddress(string address);
    string GetDayOfWeek();
    void SetDayOfWeek(string day);
    string GetTypeOfMeal();
    void SetTypeOfMeal(string meal );
    int GetRoomNumber();
    void SetRoomNumber(int RoomNumber);
    int GetPhoneNumber();
    void SetPhoneNumber(int phoneNumber);
    int GetDeliveryTime();
    void SetDeliveryTime(int DelvTime);
    int GetStudentID();
    void SetStudentID(int id);
    string GetDeliveryNote();
    void SetDeliveryNote(string note);



};

#endif // ORDERRECORD_H
