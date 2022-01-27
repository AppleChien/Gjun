#include<iostream>
using namespace std;
#include<stdio.h>
class Salary{
	private:
	 char* name;
	 int grade,pay;
	public:
		Salary(){
		}
	    Salary(char* n,int g,int p):name(n),grade(g),pay(p){
	    }
	    char* getname(){
	        return name;	
	    }
	    int getgrade(){
	    	return grade;
	    }
		int getpay(){
			return pay;
		} 
		virtual int getmoney()=0;
		~Salary(){
		}
};
class Manager:public Salary{
	public:
		Manager(){
		}
	    Manager(char* n,int g,int p):Salary(n,g,p){
	    }
	    int getmoney(){
	    	return getpay()+getgrade()*5000;
	    }
	
	   ~Manager(){
	   }
	
};
class Staff:public Salary{
	public:
		Staff(){
		}
	    Staff(char* n,int g,int p):Salary(n,g,p){
	    }
	    int getmoney(){
	    	return getpay()+getgrade()*2000;
	    }
	
	   ~Staff(){
	   }
	
};





int main(){
	Manager* m=new Manager("Pete",8,30000);
    cout<<"Name:"<<m->getname()<<endl;
    cout<<"Grade:"<<m->getgrade()<<endl;
    cout<<"Pay:"<<m->getpay()<<endl;
    cout<<"Salary:"<<m->getmoney()<<endl;
    delete m;
    
    Staff* s=new Staff("Marry",4,23000);
    cout<<"Name:"<<s->getname()<<endl;
    cout<<"Grade:"<<s->getgrade()<<endl;
    cout<<"Pay:"<<s->getpay()<<endl;
    cout<<"Salary:"<<s->getmoney()<<endl;
    delete s;

	return 0;
}

