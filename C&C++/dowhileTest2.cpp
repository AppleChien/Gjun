#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int a,b,c;
	char ans;
	do{
		cout<<"�п�J�G��:";
		cin>>a>>b;
		c=a+b;
		cout<<c<<endl;
		cout<<"�O�_�~��?";
		cin>>ans; 
	}while(ans=='y');



	return 0;
}

