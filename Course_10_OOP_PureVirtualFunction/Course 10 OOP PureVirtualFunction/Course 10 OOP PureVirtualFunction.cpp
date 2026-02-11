// Course 10 OOP PureVirtualFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Abstract , // Contract , interFace 
class clsMobile {
public:
    virtual void Dail(string PhoneNumber) = 0;
    virtual  void SendSMS(string PhoneNumber, string Text) = 0;
    virtual void TackPicture() = 0;



};
class clsIphone :public clsMobile {
public:

    void Dail(string PhoneNumber) {


    };
    void SendSMS(string PhoneNumber, string Text) {



    }
  
    void TackPicture() {





    };


};
class clsSamsungNot10 :public clsMobile {
public:
    void Dail(string PhoneNumber) {


    };
    void SendSMS(string PhoneNumber, string Text) {



    }

    void TackPicture() {





    };


    void Print() {

        cout << "Format Samsung Not10";

    }

};
class clsOPPOReeno : public clsMobile {

public:
    void Dail(string PhoneNumber) {


    }

  
    
    void SendSMS(string PhoneNumber, string Text) {


        }
   
    
    void TackPicture() {



    }



};
int main()
{
    clsIphone Iphone1;
    clsSamsungNot10 Samsung1;
    clsOPPOReeno Reeno1;
    Samsung1.SendSMS("Saied ", "Gmail.com");
   
    system("pause>0");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
