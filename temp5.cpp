
#include<iostream>
using namespace std;
class SON;
class FATHER
{
private:
    double income;
public:
    FATHER(double inc):income(inc){}
    friend double calculateTotalincome(const FATHER& father, const SON& son);
};
class SON
{
private:
    double income;
public:
    SON(double inc):income(inc){}
    friend double calculateTotalincome(const FATHER& father, const SON& son);
};
double calculateTotalincome(const FATHER& father, const SON& son)
{
    return father.income+son.income;
}
int main()
{
    double fatherincome,sonincome;
    cout<<"Enter Father's income:$";
    cin>>fatherincome;
    cout<<"Enter Son's income:$";
    cin>>sonincome;
    FATHER father(fatherincome);
    SON son(sonincome);
    double totalIncome=calculateTotalincome(father,son);
    cout<<"Total Income of the Family:$"<<totalIncome<<endl;
    return 0;
}