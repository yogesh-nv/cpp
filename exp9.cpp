#include<iostream>
#include<stdexcept>
using namespace std;
class divide:public exception{
	public:
		const char* what() const throw(){
			return "divided by zero is not allowed";
		}
};
class negative:public exception{
	public:
		const char* what() const throw(){
			return "negative number is not allowed";
		}
};
class underflow:public exception{
	public:
		const char* what() const throw(){
			return "underflow detected!!";
		}
};
class overflow:public exception{
	public:
		const char* what() const throw(){
			return "overflow detected!!";
		}
};
int main(){
	try{
		int num1,num2;
		cout<<"enter two numbers"<<endl;
		cin>>num1>>num2;
		if(num2==0){
			throw divide();
		}
		if(num1<0 || num2<0){
			throw negative();
		}
		if(num1>INT_MAX ||num2>INT_MAX)
		{
			throw overflow();
		}
		if(num1<INT_MIN||num2<INT_MIN)
		{
			throw underflow();
		}
		int result=num1+num2;
		cout<<"result="<<result;
	}
	catch(const divide&e){
		cerr<<"Error"<<e.what()<<endl;
	}
	catch(const negative&e){
		cerr<<"error"<<e.what()<<endl;
	}
	catch(const overflow&e){
		cerr<<"error"<<e.what()<<endl;
	}
	catch(const underflow&e){
		cerr<<"error"<<e.what()<<endl;
	}
	catch(const invalid_argument&e){
		cerr<<"error "<<e.what()<<endl;
	}
	catch(const out_of_range&e){
		cerr<<("error")<<e.what()<<endl;
	}
	return 0;
}