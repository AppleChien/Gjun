#include<iostream>
using namespace std;
#include<stdio.h>
#include "myprogram.h" 
int main(){
	int a,b,c,w;
	cout<<"輸入國文成績:";
	cin>>a;
	cout<<"輸入英文成績:";
	cin>>b;
	cout<<"輸入數學成績:";
	cin>>c;
	cout<<"總分:"<<tal(a,b,c)<<endl;
	cout<<"平均:"<<avg(a,b,c)<<endl;
	w=(a+b+c)/3;
	cout<<"等級:"<<grade(w)<<endl; 



	return 0;
}

