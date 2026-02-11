// Course 10 OOP Inhiritance Protected And Public And Private.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsA {
private :
    int var1;
    int Fun1() {
        return 10;
    }

public :
    int Var2;
    int Fun2() {
        return 15;
    }

protected:
    int Var3;
    int Fun3() {
        return 38;
    }

};
class clsB :public clsA {

public:
    void Fun() {
        cout << clsA::Fun3();
    }

};
int main()
{
    clsA A;
    A.Var2 = 40;
  
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
