#include <iostream>
using namespace std;
#include <math.h>
class Circle   //�ŧi���O 
{
   private:
       int r;   //�����ܼ� 
   
   protected:
   
   
   public:
       //�غc�l:�]�w�����ܼƪ�l�� 
	   Circle()   //�w�]�غc�l,�W�ٻP���O�ۦP 
	   {
	   	   r=0;
	   }
	   Circle(int r)
	   {	   	
	   	  this->r=r;
	   }	   
	   //��k
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
	   //�ѫغc�l
	   ~Circle()
	   {
	   	  cout<<"Circle�ѫغc�l"<<endl; 
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























