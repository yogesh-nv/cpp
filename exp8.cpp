#include<iostream>
using namespace std;
class Son;
class Father{
	private: double income;
	public:
	Father(double i):income(i){}
	friend double calc(const Father& father,const Son& son);
};
class Son{
	private:
	double income;
	public:
	Son(double i):income(i){}
	friend double calc(const Father& father , const Son& son);
};
double calc(const Father& father, const Son& son){
	return father.income+son.income;
}
int main(){
	double fi,si;
	cout<<"enter Father's income :"<<endl;
	cin>>fi;
	cout<<"enter Son's income :"<<endl;
	cin>>si;
	Father father(fi);
	Son son(si);
	double total=calc(fi,si);
	cout<<"total income is "<< total<<endl;
	return 0;
}
