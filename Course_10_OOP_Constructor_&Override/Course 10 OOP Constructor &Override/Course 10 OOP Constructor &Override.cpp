// Course 10 OOP Constructor &Override.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsClient {
private:
    int _ID;

    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;
public:
    clsClient(int ID, string firstname, string lastname, string email, string phone) {
        _ID = ID;
        _FirstName = firstname;
        _LastName = lastname;
        _Email = email;
        _Phone = phone;
    }
    int ID() {
        return _ID;
    }
    void setFirstName(string firstname) {
        _FirstName = firstname;


    }
    string FirstName() {

        return _FirstName;
    }
    void setLastName(string lastname) {

        _LastName = lastname;
    }
    string LastName() {
        return _LastName;
    }
    void setEmail(string Email) {
        _Email = Email;
    }
    string Email() {
        return _Email;
}

    void SetPhone(string Phone) {
        _Phone = Phone;

    }
    string Phone() {
        return _Phone;
    }
    string FullName() {
        return _FirstName + " " +_LastName;

    }
    void Print() {
        cout << "\n_______________________________\n\n";
        cout << "ID         : " << _ID << endl;
        cout << "FirstName  : " << _FirstName << endl;
        cout << "LastName   : " << _LastName << endl;
        cout << "FULL Name  : " << FullName() << endl;
        cout << "Phone      : " << _Phone << endl;
        cout << "Email      : " << _Email << endl;
        cout << "___________________________________\n";

    } 
    void SendSMS(string subject, string body) {

        cout << "The Folowing are Phone : " << _Phone << endl;
         cout << body << endl;
        cout << subject;

    }
    void sendEmail(string Masseage) {
        cout << "The Flowing Email is : " << _Email << endl;
        cout << Masseage;

    }
};
// Drived aAnd SupClass   && Base And SuperClass
class clsBankEmployee :public clsClient {
private:
    string _JobTitle;
    float _Salary;
    string _BranchName;
public:
    clsBankEmployee(int ID, string firstname, string lastname, string email, string phone, string JobTitle, float Salary, string BranchName)
        :clsClient(ID, firstname, lastname, email, phone) {

        _JobTitle = JobTitle;
        _Salary = Salary;
        _BranchName = BranchName;

    }
    void setJobtitle(string jobtitle) {
        _JobTitle = jobtitle;
    }
    string JobTitle() {
        return _JobTitle;
    }
    void setSalary(float salary) {
        _Salary = salary;

    }
    float Salary() {
        return _Salary;
    }
    void BranchName(string Branchname) {
        _BranchName = Branchname;
    }
    string BranchName() {
        return _BranchName;
    }
    void Print() {

        cout << "\n_______________________________\n\n";
        cout << "ID         : " << ID() << endl;
        cout << "FirstName  : " << FirstName() << endl;
        cout << "LastName   : " << LastName ()<< endl;
        cout << "FULL Name  : " << FullName() << endl;
        cout << "Phone      : " << Phone() << endl;
        cout << "Email      : " << Email() << endl;

        cout << "JobTitle   : " << _JobTitle << endl;
        cout << "Salary     : " << _Salary << endl;
        cout << "BranchName : " << _BranchName << endl;
        cout << "___________________________________\n";

    }


};
class clsAccountManger :public clsBankEmployee {

private:
    int _ManageAccountCount;
public:
    void SetManage(int ManageCount) {
        _ManageAccountCount = ManageCount;

   }

    int ManageAccountCount(){
        return _ManageAccountCount;
    }

    clsAccountManger(int ID, string firstname, string lastname, string email, string phone, string JobTitle, float Salary,
        string BranchName, int ManageAccountcount) : clsBankEmployee(ID, firstname, lastname, email, phone, JobTitle, Salary, BranchName) {



        _ManageAccountCount = ManageAccountcount;
    }
    void Print() {
        cout << "\n_______________________________\n\n";
        cout << "ID         : " << ID() << endl;
        cout << "FirstName  : " << FirstName() << endl;
        cout << "LastName   : " << LastName() << endl;
        cout << "FULL Name  : " << FullName() << endl;
        cout << "Phone      : " << Phone() << endl;
        cout << "Email      : " << Email() << endl;

        cout << "JobTitle   : " << JobTitle() << endl;
        cout << "Salary     : " << Salary() << endl;
        cout << "BranchName : " << BranchName() << endl;
        cout << "ManageAccountCount :" << _ManageAccountCount << endl;
        cout << "___________________________________\n";
    }
};
int main()
{
    clsAccountManger AccountManager1(10, "Saied", "Nasef", "saied.gmail.com", "01027265255", "SoftWaarEngineering", 3000, "USA", 50);
    AccountManager1.Print();
   
   /* clsClient Client1(10,"Saied","Nasef","saied.gmail.com","01027265255");
    Client1.Print();*/


    system("pause>0");
    return 0;

}

