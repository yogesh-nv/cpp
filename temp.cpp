#include<iostream>
using namespace std;
class Student
{
	private:
		string usn;
		string name;
		int marks[3];
	public:
		void input(){
			cout<<"enter the usn ";
			cin>>usn;
			cout<<"enter the name ";
			cin>>name;
			cout<<"enter the marks of 3 subject";
			for (int i = 0; i < 3; i++)
			{
				cin>>marks[i];
			}
		}
		int min(int a , int b){
			return a<b?a:b;
		}
		float average(){
			int min_marks=min(min(marks[0],marks[1]),marks[2]);
			int total_marks=marks[0]+marks[1]+marks[2];
			return static_cast<float>(total_marks-min_marks)/2;
		}
		void display(){
			cout<<"Name: "<<name<<endl;
			cout<<"USN "<<usn<<endl;
			cout<<"Marks "<<average()<<endl;
		}
		
};
int main()
		{
			Student student[2];
			for (int i = 0; i < 2; i++)
			{
				cout<<"enter the student details"<<i+1<<endl;
				student[i].input();
				cout<<endl;
			}
			for (int i = 0; i < 2; i++)
			{
				float average=student[i].average();
				student[i].display();
			}
			return 0;
			
		}