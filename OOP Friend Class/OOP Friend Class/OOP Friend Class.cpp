// OOP Friend Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsBankAccount {
private:
    float _Balance;
    string _PinCode;
protected:
    string CName;
public:
    string AccountHolderName;
    string AccountNumber;
    clsBankAccount() {
        _Balance = 5600;
        _PinCode = "12345";
        AccountHolderName = "Saied";
            AccountNumber = "444455555";
            CName = "Mohamed";
    }




    friend class clsBankAudit;

};
class clsBankAudit {

public:
    void display(clsBankAccount B1) {

        cout << "Balance :" << B1._Balance;
        cout << "\nPinCode : " << B1._PinCode;
        cout << "\nAccountNumber: " << B1.AccountNumber;
        cout << "\n AccountHolderName: " << B1.AccountHolderName;
        cout << "\nCName : " << B1.CName;
    }




};
int main()
{
    clsBankAccount B1;
    clsBankAudit A1;
    A1.display(B1);

    system("pause>0");
    return 0;

}

