// Course10 OOP Friend Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsA {
private:
    int _Var1;
public:
    int Var2;
    clsA() {

        _Var1 = 10;
        Var2 = 20;


    }
    friend class clsB; // Friend class

};
class clsB {
public:
    int _Var3;
    clsB() {
      
        _Var3 = 30;


    }

    void display(clsA A1) {

        cout << "\nThe Value Var1 Is : " << A1._Var1 << endl;
        cout << "\nThe Value Var2 Is : " << A1.Var2 << endl;

    }
};

int main()
{
    clsA A1;
    clsB B1;
    B1.display(A1);

    system("pause>0");
    return 0;
}

