#pragma once
#include <iostream>
#include "clsPerson.h"
using namespace std;
class   clsEmployee :public clsPerson {
private:
    string _Title;
    float _Salary;
    string _Department;
public:
    void SetTilte(string Title) {
        _Title = Title;

    }
    string Title() {
        return _Title;
    }
    void SetSalary(float salary) {
        _Salary = salary;
    }
    float Salary() {
        return _Salary;
    }
    void SetDepartment(string department) {
        _Department = department;
    }
    string Department() {
        return _Department;
    }
    clsEmployee(int ID, string FirstName, string LastName, string Gmail, string Phone, string Title, float Salary, string department)
        :clsPerson(ID, FirstName, LastName, Gmail, Phone) {

        _Title = Title;
        _Salary = Salary;
        _Department = department;

    }
    void Print() {
        cout << "\nInfo: \n\n";
        cout << "__________________________________________\n";
        cout << "ID               : " << ID() << endl;
        cout << "FirstName        : " << FirstName() << endl;
        cout << "Last Name        : " << LastName() << endl;
        cout << "Full Name        : " << FullName() << endl;
        cout << "Gmai             : " << Email() << endl;
        cout << "Phone            : " << Phone() << endl;

        cout << "Title             : " << _Title << endl;
        cout << "Salary           : " << _Salary << endl;
        cout << "Department       : " << _Department << endl;
        cout << "\n________________________________________\n";
    }
};
class clsDeveloper :public clsEmployee {
private:

    string _MainProgLanguage;
public:
    void setMainProgramingLanguage(string  MainProgramingLanguage) {
        _MainProgLanguage = MainProgramingLanguage;

    }
    string MainProgramingLanguag() {
        return   _MainProgLanguage;

    }
    //Overriding 
    clsDeveloper(int ID, string FirstName, string LastName, string Gmail, string Phone, string Title, float Salary,
        string department, string MainProgramingLanguage)
        : clsEmployee(ID, FirstName, LastName, Gmail, Phone, Title, Salary, department) {

        _MainProgLanguage = MainProgramingLanguage;

    }
    void Print() {
        clsEmployee::Print();
        cout << "MainPrograming Language: " << _MainProgLanguage << endl;




    }





};

