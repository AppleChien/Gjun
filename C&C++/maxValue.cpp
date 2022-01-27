#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int a,b;
	printf("請輸入2數:");
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("最大值:%d\n",a);
	}else{
		printf("最大值:%d\n",b);
	}
	
	
	
	return 0;
} 
