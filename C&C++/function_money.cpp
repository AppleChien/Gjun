#include<iostream>
using namespace std;
#include<stdio.h>
double money(int p,double r){
	return p*(1+r);
}

int main(){
	int m;
	double r;
	cout<<"input money,rate:";
	cin>>m>>r;
	cout<<"money="<<money(m,r)<<endl;



	return 0;
}

