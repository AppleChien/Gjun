#include<iostream>
using namespace std;
#include<stdio.h>
#include "myprogram.h" 
int main(){
	int a,b,c,w;
	cout<<"��J��妨�Z:";
	cin>>a;
	cout<<"��J�^�妨�Z:";
	cin>>b;
	cout<<"��J�ƾǦ��Z:";
	cin>>c;
	cout<<"�`��:"<<tal(a,b,c)<<endl;
	cout<<"����:"<<avg(a,b,c)<<endl;
	w=(a+b+c)/3;
	cout<<"����:"<<grade(w)<<endl; 



	return 0;
}

