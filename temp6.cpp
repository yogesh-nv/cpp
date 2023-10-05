#include<iostream>
using namespace std;
class Son;
class Father{
	private:
		double income;
	public:
		Father(double inc):income(inc){}
		friend double calculate(const Father& father, const Son& son);
};
class Son{
	private:
		double income;
	public:
		Son(double inc):income(inc){}
		friend double calculate(const Father& father, const Son& son);
};
double calculate(const Father& father,const Son& son)
{
	return father.income+son.income;
}

int main(){
	double fatherincome,sonincome;
	cout<<"enter father income";
	cin>>fatherincome;
	cout<<"enter father income";
	cin>>sonincome;
	Father father(fatherincome);
	Son son(sonincome);
	double total=calculate(father,son);
    cout<<"Total Income of the Family:$"<<total<<endl;

	return 0;
}
