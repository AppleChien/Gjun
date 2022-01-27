#include <iostream>
using namespace std;
#include <math.h>
class Circle   //宣告類別 
{
   private:
       int r;   //成員變數 
   
   protected:
   
   
   public:
       //建構子:設定成員變數初始值 
	   Circle()   //預設建構子,名稱與類別相同 
	   {
	   	   r=0;
	   }
	   Circle(int r)
	   {	   	
	   	  this->r=r;
	   }	   
	   //方法
	   double area()
	   {
	   	  return M_PI*pow(r,2);
	   }
	   double length()
	   {
	   	  return 2*M_PI*r;
	   }
	   void setr(int k)
	   {
	   	   r=k;
	   }
	   int getr()
	   {
	   	   return r;
	   }
	   //解建構子
	   ~Circle()
	   {
	   	  cout<<"Circle解建構子"<<endl; 
	   } 
};

class Ball:public Circle{
	private:
	public:
	Ball(){
		
	}
	Ball(int x):Circle(x){
		
	} 
	double BallArea(){
		return 4*M_PI*pow(getr(),2);
	}
	double BallVolume(){
		return 4/3*M_PI*pow(getr(),3);
	}	
};


//---------------------------------------------------------------------------------------------------------------------

int main()
{
     Ball  a(10);
     cout<<"area:"<<a.area()<<endl;
     cout<<"length:"<<a.length()<<endl;
     cout<<"Ball area:"<<a.BallArea()<<endl;
     cout<<"Ball Volume:"<<a.BallVolume()<<endl;
     
     Ball  *p=new Ball(10);
     cout<<"area:"<<p->area()<<endl;
     cout<<"length:"<<p->length()<<endl;
     cout<<"Ball area:"<<p->BallArea()<<endl;
     cout<<"Ball Volume:"<<p->BallVolume()<<endl;
	delete p;
	
	
	
	return 0;  
}























