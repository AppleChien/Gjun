#include <iostream>
using namespace std;
#include <math.h>
class  Score
{
    private:
	   
	   
	protected:
	  int ch,eng,math;
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

class Grade:public Score{
	private:
		double wc,we,wm;
	public:	
	  Grade(){
	  	
	  }
	  Grade(int ch,int eng,int math):Score(ch,eng,math){
	  }
	  Grade(int ch,int eng,int math,double wc,double we,double wm):Score(ch,eng,math),wc(wc),we(we),wm(wm){
	  }
     
     char isGrade(){
     	if(avg()>=90)
     	return 'A';
     	else if(avg()>=80)
     	return 'B';
     	else if(avg()>=70)
     	return 'C';
     	else if(avg()>=60)
     	return 'D';
     	else
     	return 'E';
     }
     double sum(){
     	return ch*wc+eng*we+math*wm;
     }
};



int main()
{
	int c,e,m;
	cout<<"input ch,eng,math:";
	cin>>c>>e>>m;
    Grade *g=new Grade(c,e,m,0.4,0.3,0.3);
    cout<<"tal:"<<g->tal()<<endl;
    cout<<"avg:"<<g->avg()<<endl;
    cout<<"sum:"<<g->sum()<<endl;
    cout<<"isGrade"<<g->isGrade()<<endl;
    delete g;
	
	
	
	
}

