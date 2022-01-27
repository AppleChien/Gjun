#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int n,sum=0;
	do{
		cout<<"input n:"<<endl;
		cin>>n;
		if(n<0){
			cout<<"input error"<<endl;
			continue;
		}if(n==0){
			break;
		}
			sum+=n;
			cout<<"sum="<<sum<<endl;
		
		
		
		
		
	}while(1);

    cout<<"***sum="<<sum<<endl; 

	return 0;
}

