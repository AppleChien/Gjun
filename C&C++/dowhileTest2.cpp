#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int a,b,c;
	char ans;
	do{
		cout<<"請輸入二數:";
		cin>>a>>b;
		c=a+b;
		cout<<c<<endl;
		cout<<"是否繼續?";
		cin>>ans; 
	}while(ans=='y');



	return 0;
}

