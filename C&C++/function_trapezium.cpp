#include<iostream>
using namespace std;
#include<stdio.h>
double trapezium(int u, int d,int h){
	return (u+d)*h/2.0;
}

int main(){
	int u,d,h;
	cout<<"��J�W��,�U��,��:";
	cin>>u>>d>>h;
	cout<<"��έ��n="<< trapezium(u,d,h);



	return 0;
}

