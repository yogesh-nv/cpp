#include<iostream>
using namespace std;
class Polygon{
	public:
	virtual double area() const=0;
};
class Rectangle:public Polygon{
	private: double length,width;
	public: 
	Rectangle(double l,double w):length(l),width(w){}
	double area() const{
		return length*width;
	}
};
class Triangle:public Polygon{
	private: double base,height;
	public:
	Triangle(double b,double h):base(b),height(h){}
	double area() const{
		return 0.5*base*height;
	}
};
int main(){
	Polygon* poly;
	Rectangle rect(5,3);
	Triangle tri(10,20);
	poly=&rect;
	cout<<"Area of rectangle is "<<poly->area()<<endl;
	poly=&tri;
	cout<<"Area of rectangle is "<<poly->area()<<endl;
	return 0;
}