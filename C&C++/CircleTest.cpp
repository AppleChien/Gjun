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


//---------------------------------------------------------------------------------------------------------------------

int main()
{
	Circle a;   //�w�]�غc�l,�إߪ���
	cout<<"R:"<<a.getr()<<endl;
	cout<<"area:"<<a.area()<<endl; 
	a.setr(20);
	cout<<"R:"<<a.getr()<<endl;
	cout<<"area:"<<a.area()<<endl; 
	cout<<"length:"<<a.length()<<endl;
	
	
	Circle b(10);   //�I�sCircle(int)�غc�l 
	cout<<"R:"<<b.getr()<<endl;
	cout<<"area:"<<b.area()<<endl; 
	cout<<"length:"<<b.length()<<endl;
	
	Circle *c=new Circle(50);
    cout<<"R:"<<c->getr()<<endl;
	cout<<"area:"<<c->area()<<endl; 
	cout<<"length:"<<c->length()<<endl;
	delete c;
	
	return 0;  
}























