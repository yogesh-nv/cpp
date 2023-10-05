#include<iostream>
using namespace std;
class Student{
	private: 
	string usn,name;
	int marks[3];
	public:
	void input(){
		cout<<"enter usn :";
		cin>>usn;
		cout<<"enter name: ";
		cin>>name;
		cout<<"Enter the marks";
		for(int i=0;i<3;i++){
			cin>>marks[i];
		}
	}
	int min(int a,int b){
		return (a<b)?a:b;
	}
	float average(){
		int min_marks=min(min(marks[0],marks[1]),marks[2]);
		int total_marks=marks[0]+marks[1]+marks[2];
		return (total_marks-min_marks)/2;
	}
	void display(){
		cout<<"Name :"<<name<<endl;
		cout<<"USN: "<<usn<<endl;
		cout<<"average marks :"<<average()<<endl;
	}
};
int main(){
	Student stu[2];
	for(int i=0;i<2;i++){
		cout<<"Enter the student "<<i+1<<" details"<<endl;
		stu[i].input();
		cout<<endl;
	}
	for(int i=0;i<2;i++){
		float avg=stu[i].average();
		stu[i].display();
	}
	return 0;
}