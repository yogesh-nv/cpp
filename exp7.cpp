#include<iostream>
using namespace std;
class EMP{
	private:
	int num;
	string name;
	int basic_salary,aa,net;
	public:
	void input(){
		cout<<"enter the employee number"<<endl;
		cin>>num;
		cout<<"enter the employee name"<<endl;
		cin>>name;
		cout<<"enter the employee basic salary"<<endl;
		cin>>basic_salary;
	}
	void disp(){
		cout<<" employee number is "<<num<<endl;
		cout<<" employee name is "<<name<<endl;
		cout<<" employee basic salary is "<<basic_salary<<endl;
		cout<<" employee all allowance  is "<<aa<<endl;
		cout<<" employee net salar  is "<<net<<endl;
	}
	float calc(){
		aa=1.23*basic_salary;
		int gross=basic_salary+aa;
		int it=0.3*gross;
		net=gross-it;
		return 0;
	}
};
int main(){
	EMP emp;
	emp.input();
	emp.calc();
	emp.disp();
	return 0;
}