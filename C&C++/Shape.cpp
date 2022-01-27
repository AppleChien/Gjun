#include<iostream>
using namespace std;
#include<stdio.h>
class Shape{
	private:
	char *name;
	public:
	Shape(){
	}
	void setname(char*n){
		name=n;
	}
	char* getname(){
		return name; 
	}
	virtual double area(){
		return 0.0;
	} 
	~Shape(){
		delete name;
	}
	
};
class Rectangle:public Shape{
	private:
	int h,l;
	public:
	Rectangle(){
	}
	Rectangle(int high,int length):h(high),l(length){
		
	}
	double area(){
		return h*l;
	}
	~Rectangle(){
	}
	
	
	
};

class Triangle:public Shape{
	private:
	int b,h;
	public:
	Triangle(){
	}
	Triangle(int base,int high):b(base),h(high){
		
	}
	double area(){
		return (b*h)/2.0;
	}
	~Triangle(){
	}
	
	
	
};



int main(){
	
	Shape *s=new Shape();
	Rectangle  *r=new Rectangle(9,6);
	r->setname("rectangle");
	Triangle  *t=new Triangle(7,5);
    t->setname("triangle");

    s=r;
    cout<<"Name:"<<s->getname()<<endl;
    cout<<"Area:"<<s->area()<<endl;
	 
    s=t;
    cout<<"Name:"<<s->getname()<<endl;
    cout<<"Area:"<<s->area()<<endl;
        
    Shape *s2=new Rectangle(5,3);
    cout<<s2->area()<<endl;



	return 0;
}

