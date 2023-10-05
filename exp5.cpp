#include<iostream>
using namespace std;
class Father{
	protected: string surname;
	double bankBalance;
	public:
	Father(const string& s,double balance):surname(s),bankBalance(balance){}
	void dispFather(){
		cout<<"Father's details"<<endl;
		cout<<"Father's name"<<surname<<endl;
		cout<<"Father's bank balance"<<bankBalance<<endl;
	}
};
	class Son:public Father{
		private: string firstName,dob;
		public:
		Son(const string& f,const string& d,const string& s,double balance):Father(s,balance),firstName(f),dob(d){}
		void dispSon(){
		cout<<"Son's details";
		cout<<"Son's name"<<surname<<endl;
		cout<<"Son's bank balance"<<bankBalance<<endl;
	}
};
int main(){
	Father f1("smith",10000);
	Son s1("john","10-10-2000","smith",500);

	f1.dispFather();

	s1.dispSon();
	return 0;
}