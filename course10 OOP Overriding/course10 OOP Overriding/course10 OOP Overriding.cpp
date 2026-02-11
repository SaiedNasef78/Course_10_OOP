// course10 OOP Overriding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Course 10 Inhiritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Course 10 Exercise Person.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsPerson.h"
#include "clsEmployee.h";
using namespace std;

//      SupClass & Drrived   SuperClass & BaseClass

int main()
{
    clsDeveloper Developer1(10, "Saied", "Nasef", "Gmail.com", "0102873653", "Egypt", 10000, "sofwaaerenginerring","C++");

    Developer1.Print();
   /* clsEmployee Employee1(10, "Saied", "Nasef", "Gmail.com", "0102873653", "Egypt", 10000, "sofwaaerenginerring");
    Employee1.Print();
    cout << Employee1.Title() << endl;
    cout << Employee1.Salary() << endl;
    cout << Employee1.Department() << endl;*/
    /*Employee1.SetFirstName("Saied");
    Employee1.SetLaststName("Nasef");
    Employee1.setPhone("0102872636");
    Employee1.SetSalary(4000);
    Employee1.Print();
    Employee1.SetEmail("saied.gmai@.com");
    Employee1.SendEmail("Hi", "How are you?");
    Employee1.SendSMS("Hi");*/


    /*clsPerson Person1(10, "Saied", "Nasef", "Gmail.com", "0102873653");
    Person1.Print();

    Person1.SendEmail("Hi", "How Are You?");
    Person1.SendSMS("Hi");
*/

    system("pause>0");
    return 0;

}

