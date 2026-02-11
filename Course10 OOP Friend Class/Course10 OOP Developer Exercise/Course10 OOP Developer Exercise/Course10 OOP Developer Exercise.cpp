// Course 10 Inhiritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Course 10 Exercise Person.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
//      SupClass & Drrived   SuperClass & BaseClass
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
        cout << "Title            : " << _Title << endl;
        cout << "Salary           : " << _Salary << endl;
        cout << "Department       : " << _Department << endl;
        cout << "\n________________________________________\n";




    }
};
class clsDeveloper :public clsEmployee {
private:
    string _MainProgramingLanguage;

public:
    void setMainProgramingLanguage(string MainProgramingLanguage) {
        _MainProgramingLanguage = MainProgramingLanguage;

    }
    string MainProgramingLanguage() {
        return  _MainProgramingLanguage;
    }
    clsDeveloper(int ID, string FirstName, string LastName, string Gmail, string Phone, string Title, float Salary,
        string department, string MainProgramingLanguage) :clsEmployee(ID, FirstName, LastName, Gmail, Phone, Title, Salary, department)
    {

        _MainProgramingLanguage = MainProgramingLanguage;

    }
    void Print() {

        cout << "\nInfo: \n\n";
        cout << "__________________________________________\n";
        cout << "ID               : " << ID() << endl;
        cout << "FirstName        : " << FirstName() << endl;
        cout << "Last Name        : " << LastName() << endl;
        cout << "Full Name        : " << FullName() << endl;
        cout << "Gmai             : " << Email() << endl;
        cout << "Phone            : " << Phone ()<< endl;
        cout << "Title            : " << Title() << endl;
        cout << "Salary           : " << Salary() << endl;
        cout << "Department       : " << Department() << endl;
        cout << "MainProgramingLanguage: " << MainProgramingLanguage() << endl;
        cout << "\n________________________________________\n";




    }

};
int main()
{
    clsDeveloper Developer1(10, "Saied", "Nasef", "Gmail.com", "0102873653", "Egypt", 10000, "sofwaaerenginerring", "C++");
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

