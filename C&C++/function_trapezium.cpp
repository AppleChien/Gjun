#include<iostream>
using namespace std;
#include<stdio.h>
double trapezium(int u, int d,int h){
	return (u+d)*h/2.0;
}

int main(){
	int u,d,h;
	cout<<"輸入上底,下底,高:";
	cin>>u>>d>>h;
	cout<<"梯形面積="<< trapezium(u,d,h);



	return 0;
}

