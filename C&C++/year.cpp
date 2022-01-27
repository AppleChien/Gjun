#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int y;
	printf("西元年:");
	scanf("%d",&y);
	if(y%4==0&&y%100!=0||y%400==0){
		printf("閏年");
	}else{
	    printf("平年"); 
	} 
	
	
	
	return 0;
} 
