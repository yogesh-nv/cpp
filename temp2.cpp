#include<iostream>
#include<string>
using namespace std;
class FATHER
{
protected:
    string surname;
    double bankBalance;
public:
    FATHER(const string&s, double balance):surname(s),bankBalance(balance){}
    void displayFatherDetails()
    {
        cout<<"Father's Surname:"<<surname<<endl;
        cout<<"Father's Bank Balance:$"<<bankBalance<<endl;
    }
};
class SON:public FATHER
{
private:
    string firstName;
    string dob;
public:
    SON(const string&f, const string&d, const string&s, double balance):FATHER(s,balance),firstName(f),dob(d){}
    void displaySonDetails()
    {
        cout<<"Son's First Name:"<<firstName<<endl;
        cout<<"Son's DOB:"<<dob<<endl;
        cout<<"Son's  Surname:"<<surname<<endl;
        cout<<"Son's Bank Balance:$"<<bankBalance<<endl;
    }
};
int main()
{
    FATHER F1("Smith", 100000.0);
    SON S1("John","2001-05-10","Smith",500.0);
    cout<<"Father's Details:"<<endl;
    F1.displayFatherDetails();
    cout<<endl;
    cout<<"Son's Details:"<<endl;
    S1.displaySonDetails();
    return 0;

}