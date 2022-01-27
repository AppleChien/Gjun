#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	double a,b,c;
	char op;
	cout<<"¹Bºâ¦¡:";
	cin>>a>>op>>b;
//	scanf("%d %c %d",&a,&op,&b);
	switch(op){
		case'+':
		  c=a+b;
		  cout<<a<<op<<b<<"="<<c<<endl;
		  break;
		case'-':
		  c=a-b;
		  cout<<a<<op<<b<<"="<<c<<endl;
		  break;
		case'*':
		  c=a*b;
		  cout<<a<<op<<b<<"="<<c<<endl;
		  break;
		case'/':
		  c=a/b;
		  cout<<a<<op<<b<<"="<<c<<endl;
		  break;	
	    default:
		  cout<<"input error";	
	}



	return 0;
}

