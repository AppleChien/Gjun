#include <iostream>
using namespace std;
#include <math.h>
class Triangle{
	private:
		
	protected:
		int b,h;
	public:
	
    Triangle(int b,int h):b(b),h(h){
	
	}	
	double area(){
		return b*h/2;
	}
   ~Triangle(){
   }
	
};

class Volumn:public Triangle{
	private:
		
	protected:
		int H;
	public:
		Volumn(int b,int h,int H):Triangle(b,h),H(H){
			
		}
		double pile(){
			return (b*h/2)*H;
		}
		double taper(){
		    return (b*h/2)*(H/3);	
		}
	~Volumn(){
	}
	
	
	
};
int main(){
	int b,h,H;
	cout<<"input b,h,H:";
	cin>>b>>h>>H;
	Volumn *v=new Volumn(b,h,H);
	cout<<"arae="<<v->area()<<endl;
	cout<<"pile="<<v->pile()<<endl;
	cout<<"taper"<<v->taper()<<endl;
	delete v;
	
	
	
	
}
