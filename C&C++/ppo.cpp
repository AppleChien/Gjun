#include <iostream>
using namespace std;
#include <math.h>
class Body{
	
	private:
	int h,w;
	char s;
	
	public:
	Body(){
	   h=0;
	   w=0;
	   s=' ';	
	}	
    Body(int h,char s){
       this->h=h;
	   this->s=s;	
    }
	Body(int h,int w){
       this->h=h;
       this->w=w;	
    }
    Body(int h, int w,char s){
       this->h=h;
       this->w=w;
	   this->s=s;	
    }
    double BMI(){
    	double x=h/100.0;
       return w/pow(x,2);	
    }
    double STDweight(){
    	if(s=='m'||s=='M'){
    		return (h-80)*0.7;
    	}else{
    		return (h-70)*0.6;
    	}
    }
	~Body(){
		
	}
	
	
};

int main(){
	int h,w;
	char s;
	
	cout<<"input h,w,sex:";
	cin>>h>>w>>s;
	Body b(h,w,s);
	cout<<"BMI:"<<b.BMI()<<endl;
	cout<<"STDweight:"<<b.STDweight()<<endl;
	
	Body *p=new Body(h,w,s); 
    cout<<"BMI="<<p->BMI()<<endl;    
	cout<<"STD weight:"<<p->STDweight()<<endl;
	delete p;
	
	
	
}
