#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int y;
	printf("�褸�~:");
	scanf("%d",&y);
	if(y%4==0&&y%100!=0||y%400==0){
		printf("�|�~");
	}else{
	    printf("���~"); 
	} 
	
	
	
	return 0;
} 
