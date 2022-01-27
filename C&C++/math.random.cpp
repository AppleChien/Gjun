#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,pc,min=1,max=100;
	cout<<"input number 1~100:";
	srand(time(NULL));
	pc=rand()%100+1;
	
	do{
	  cin>>i; 
	  if(i>=min&&i<=max){
	  	
		if(i>pc){
			max=i;
			cout<<"try again! input number"<<min<<"~"<<max<<endl; 
			continue;
		}
		if(i<pc){
			min=i;
			cout<<"try again! input number"<<min<<"~"<<max<<endl; 
			continue;
		}else{
			cout<<"congratulation!!!"<<endl;
			break;
		}
      }else{
      	cout<<"input error"<<endl;
      }
	}while(i<=100&&i>=1);



	return 0;
}

