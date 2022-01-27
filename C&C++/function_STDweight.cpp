#include<iostream>
using namespace std;
#include<stdio.h>
#include "mytool.h"
int main(){
	int h;
	char c;
	cout<<"輸入身高:";
	cin>>h;
	cout<<"性別(m/f):";
	cin>>c;
	cout<<"標準體重:"<<STDweight(h,c)<<endl;



	return 0;
}

