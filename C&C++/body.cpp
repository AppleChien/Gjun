#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	char gender;
	double h,w;
	printf("�п�J�ʧO(m/f):");
	scanf("%c",&gender);
	printf("�п�J����:");
	scanf("%lf",&h);
	if(gender=='m'||gender=='M'){
	   w=(h-80)*0.7;
	   printf("�з��魫:%.1lf",w);
	}else{
	   w=(h-70)*0.6;
	   printf("�з��魫:%.1lf",w);	
	}
	
	
	
	return 0;
}
