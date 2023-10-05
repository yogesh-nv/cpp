#include<iostream>
using namespace std;
class Base1
{
public:
    int publicVar1;
    void publicFunc1()
    {
        cout<<"Base 1 Public Function"<<endl;
    }
protected:
    int protectedVar1;
    void protectedFunc1()
    {
        cout<<"Base 1 Protected Function"<<endl;
    }
    private:
    int privateVar1;
    void privateFunc1()
    {
        cout<<"Base 1 Private Function"<<endl;
    }
};
class Base2
{
public:
    int publicVar2;
    void publicFunc2()
    {
        cout<<"Base 2 Public Function"<<endl;
    }
protected:
    int protectedVar2;
    void protectedFunc2()
    {
        cout<<"Base 2 Protected Function"<<endl;
    }
    private:
    int privateVar2;
    void privateFunc2()
    {
        cout<<"Base 2 Private Function"<<endl;
    }
};
class Derived:public Base1, protected Base2
{
public:
    void accessBase1Members()
    {
        publicVar1=10;
        publicFunc1();
        cout<<"Public Variable 1:"<<endl;
        cout<<publicVar1<<endl;
        protectedVar1=20;
        protectedFunc1();
        cout<<"Protected Variable 1:"<<endl;
        cout<<protectedVar1<<endl;
    }
    void accessBase2Members()
    {
        publicVar2=30;
        publicFunc2();
        cout<<"Public Variable 2:"<<endl;
        cout<<publicVar2<<endl;
        protectedVar2=40;
        protectedFunc2();
        cout<<"Protected Variable 2:"<<endl;
        cout<<protectedVar2<<endl;
    }
};
int main()
{
    Derived d;

    d.accessBase1Members();
    d.accessBase2Members();
    return 0;
}