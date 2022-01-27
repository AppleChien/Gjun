#include <iostream>
using namespace std;
#include <math.h>
class  Score
{
    private:
	   int ch,eng,math;
	   
	protected:
	  
	public:
	  
	   Score()
	   {
	   	  ch=eng=math=0;
	   }
	   Score(int x,int y,int z):ch(x),eng(y),math(z)   //傳值給ch,eng,math 
		{
		//	 ch=x;
		//	 eng=y;
		//	 math=z;
		}
		//方法
		int tal()
		{
			return ch+eng+math;
		} 
		double avg()
		{
			 return tal()/3.0;
		}
		void setscore(int a,int b,int c)
		{
			ch=a;
			eng=b;
			math=c;
		}
	    ~Score()
	    {
	    	cout<<"Score解建構子"<<endl; 
	    }
};
int main()
{
	int c,e,m;
	cout<<"input ch,eng,math:";
	cin>>c>>e>>m;
	Score  s(c,e,m);
	cout<<"tal:"<<s.tal()<<endl;
	cout<<"avg:"<<s.avg()<<endl;

// private等級變數不能直接給值 
/*	s.ch=68;
	s.eng=90;
	s.math=75;
	*/ 
	
	
	Score  *p=new Score(c,e,m);
	cout<<"tal:"<<p->tal()<<endl;
	cout<<"avg:"<<p->avg()<<endl;
	delete p;
	
}

