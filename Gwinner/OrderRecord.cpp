#include "OrderRecord.h"

OrderRecord::OrderRecord()
{

}
string OrderRecord::GetDormName(){
    return dormName;
}
void OrderRecord::SetDormName(string hallname){
    dormName = hallname;

}
string OrderRecord::GetCustomerName(){
    return customerName;
}
void OrderRecord::SetCustomerName(string name){
    customerName = name;
}
string OrderRecord::GetCreditCardInfo(){
    return creditCardInfo;
}
void OrderRecord::SetCreditCardInfo(string cardInfo){
    creditCardInfo = cardInfo;
}
string OrderRecord::GetPaymentAddress(){
    return  paymentAddress;
}
void OrderRecord::SetPaymentAddress(string address){
    paymentAddress = address;
}
string OrderRecord::GetDayOfWeek(){
    return dayOfWeek;
}
void OrderRecord::SetDayOfWeek(string day){
    dayOfWeek = day;
}
string OrderRecord::GetTypeOfMeal(){
    return typeOfMeal;
}
void OrderRecord::SetTypeOfMeal(string meal ){
    typeOfMeal = meal;
}
int OrderRecord::GetRoomNumber(){
    return roomNum;
}
void OrderRecord::SetRoomNumber(int RoomNumber){
    roomNum = RoomNumber;
}
int OrderRecord::GetPhoneNumber(){
    return phoneNum;
}
void OrderRecord::SetPhoneNumber(int phoneNumber){
    phoneNum = phoneNumber;
}
int OrderRecord::GetDeliveryTime(){
    return time;
}
void OrderRecord::SetDeliveryTime(int DelvTime){
    time = DelvTime;
}
int OrderRecord::GetStudentID(){
    return studentIDnum;
}
void OrderRecord::SetStudentID(int id){
    studentIDnum = id;
}
string OrderRecord::GetDeliveryNote(){
    return deliveryNotes;
}
void OrderRecord::SetDeliveryNote(string note){
    deliveryNotes = note;
}
