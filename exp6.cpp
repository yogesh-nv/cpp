#include<iostream>
using namespace std;
class Stu{
	private: string name;
	int marks[3];
	public:
	void input(){
		cout<<"enter the student name"<<endl;
		cin>>name;
		cout<<"enter the marks"<<endl;
		for(int i=0;i<3;i++)
		cin>>marks[i];
	}
	void display(){
		cout<<"stu name :"<<name<<endl;
	}
	friend float avg_marks(const Stu& stu);
};
float avg_marks(const Stu& stu){
	return (stu.marks[0]+stu.marks[1]+stu.marks[2])/3;
}
int main(){
	Stu s;
	s.input();
	s.display();
	float average=avg_marks(s);
	cout<<"average marks :"<<average<<endl;
	return 0;
}