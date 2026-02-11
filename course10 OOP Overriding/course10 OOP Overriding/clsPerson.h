#pragma once
#include <iostream>
using namespace std;
class clsPerson {
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Gmail;
    string _Phone;
public:

    clsPerson(int ID, string FirstName, string LastName, string Gmail, string Phone) {

        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Gmail = Gmail;
        _Phone = Phone;
    }
    //ReadOnly 
    int  ID() {
        return   _ID;
    }
    //properaty Set
    void SetFirstName(string FirstName)
    {

        _FirstName = FirstName;
    }
    //properatyGet
    string FirstName() {

        return _FirstName;

    }
    void SetLaststName(string LastName)
    {

        _LastName = LastName;
    }
    string LastName() {

        return _LastName;
    }
    void SetEmail(string Email) {
        _Gmail = Email;

    }
    string Email() {
        return _Gmail;

    }
    void setPhone(string Phone) {
        _Phone = Phone;
    }
    string Phone() {
        return _Phone;
    }
    string FullName() {
        return _FirstName + " " + _LastName;
    }
    void Print() {
        cout << "\nInfo: \n\n";
        cout << "__________________________________________\n";
        cout << "ID               : " << _ID << endl;
        cout << "FirstName        : " << _FirstName << endl;
        cout << "Last Name        : " << _LastName << endl;
        cout << "Full Name        : " << FullName() << endl;
        cout << "Gmai             : " << _Gmail << endl;
        cout << "Phone            : " << _Phone << endl;
        cout << "\n________________________________________\n";
    }
    void SendEmail(string Subject, string body) {

        cout << "\nThe Following message sent Successfully to email: " << _Gmail << endl;
        cout << "Subject   :" << Subject << endl;
        cout << "Body      :" << body << endl;


    }
    void SendSMS(string Subject) {

        cout << "\nYhe Following SMS Sent Succesffully To Phone: " << _Phone << endl;
        cout << Subject << endl;


    }
};

