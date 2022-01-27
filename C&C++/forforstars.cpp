#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int i,j,n;
	for(i=1;i<=7;i++){
		for(j=1;j<=4;j++){
			cout<<"*";
		}
		cout<<endl;
	}cout<<endl;
    
    for(i=1;i<=7;i++){
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}cout<<endl;
	
	cout<<"input n:";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i-1;j++){
			cout<<" ";
		}
		cout<<i;
		cout<<endl;
	}cout<<endl;
	
	for(i=7;i>=1;i--){
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}


	return 0;
}

