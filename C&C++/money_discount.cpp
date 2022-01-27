#include<iostream>
using namespace std;
#include<stdio.h>
class Book{
	private:
		char *name,*no;
		int cost ,account;
	public:
		Book(){
		}
		Book(char *na,char *no,int c,int a):name(na),no(no),cost(c),account(a){
			
		}
	   char*getname(){
	    	return name;
	    }		
	   char *getno(){
	   	    return no;
	   }
	   int getcost(){
	   	    return cost;
	   }
	   int getaccount(){
	   	   return account;
	   }
	   double tal(){
	       return getcost()*getaccount();
	   }
	    
	   ~Book(){
	   	 delete name,no;
	   }
	   
	   
};

class Discount:public Book{
	private:
		int money;
	public:
		Discount(){
		}
		Discount(char *na,char *no,int c,int a,int m):Book(na,no,c,a),money(m){
			
		}
		int getmoney(){
			return money;
		}
        double t=Book::tal();
		double tal(){
	    if(t>=50000){
	    	return t*0.7;
	    }else if(t>=30000){
	    	return t*0.85;
	    }else if(t>=20000){
	    	return t*0.9;
	    }else
	        return t+money;
        }
	~Discount(){
		
	}
	
	
	
};



int main(){
	Discount *d=new Discount("Hello","03",350,5,60);
	cout<<"Name:"<<d->getname()<<endl;
	cout<<"No:"<<d->getno()<<endl;
	cout<<"Cost:"<<d->getcost()<<endl;
	cout<<"Account:"<<d->getaccount()<<endl;
	cout<<"Money:"<<d->getmoney()<<endl;
	cout<<"Tal:"<<d->tal()<<endl;
    delete d;


	return 0;
}

