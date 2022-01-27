#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int u,d,h;
	double area;
	printf("請輸入上底,下底,高");
//	cout<<"請輸入上底,下底,高";
    scanf("%d %d %d",&u,&d,&h);
//	cin>>u>>d>>h;
	area=(u+d)*h/2.0;
//	cout<<"梯形面積="<<area<<endl; 
	printf("梯形面積:%.1lf\n",area);
	
	
	return 0;
}
