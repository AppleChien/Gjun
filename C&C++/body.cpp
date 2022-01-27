#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	char gender;
	double h,w;
	printf("請輸入性別(m/f):");
	scanf("%c",&gender);
	printf("請輸入身高:");
	scanf("%lf",&h);
	if(gender=='m'||gender=='M'){
	   w=(h-80)*0.7;
	   printf("標準體重:%.1lf",w);
	}else{
	   w=(h-70)*0.6;
	   printf("標準體重:%.1lf",w);	
	}
	
	
	
	return 0;
}
