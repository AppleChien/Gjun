#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	char account[][20]={"joe","peter","bill","kelly","sam"};
	int balance[]={8000,25000,1800,6000,38000};
    char user[20];
    int money;
	cout<<"±b¸¹:";
	cin>>user;
	cout<<"´£´Úª÷ÃB:";
	cin>>money;
	int i;
	for(i=0;i<5;i++){
		if(strcmp(user,account[i])==0){
			if(money<=balance[i]){
				balance[i]-=money;
				cout<<"¾lÃB:"<<balance[i]<<endl; 
			}else{
				cout<<"¾lÃB¤£¨¬";
				
			}
			break;
		}
	}

    if(strcmp(user,account[i])!=0){
		cout<<"account error"<<endl;
	}

	return 0;
}

