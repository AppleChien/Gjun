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


//---------------------------------------------------------------------------------------------------------------------

int main()
{
	Circle a;   //預設建構子,建立物件
	cout<<"R:"<<a.getr()<<endl;
	cout<<"area:"<<a.area()<<endl; 
	a.setr(20);
	cout<<"R:"<<a.getr()<<endl;
	cout<<"area:"<<a.area()<<endl; 
	cout<<"length:"<<a.length()<<endl;
	
	
	Circle b(10);   //呼叫Circle(int)建構子 
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























