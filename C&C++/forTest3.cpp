#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int i,n ,sum=0;
	cout<<"input number:";
	
	for(i=1;i<=5;i++){
		cin>>n;
		if(n%2==0){
	      sum+=n;
		  cout<<"sum="<<sum<<endl;
		}else{
			cout<<"it's odd!!!"<<endl;
		}
		
		
	}
    cout<<"***sum="<<sum<<endl;


	return 0;
}

