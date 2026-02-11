
// Course 10 OOP  UbCastin And DownCasting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsPerson {
public:
    string FULLName = "Saied Nasef";


};
class clsEmployee:public clsPerson {

public:
    string Title = "Egypt";

};
int main()
{
    //UP Casting
    // Convert Drived class TO Base class
    clsEmployee Employee1;
    clsPerson* Person1 = &Employee1;
    cout << Employee1.FULLName << endl;
    cout << Person1->FULLName << endl;


    ////Down Casting 
    //// Convert Base Calss To Drived Class 
    //clsPerson Person1;
    //clsEmployee* Employee1 = &Person1;

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
