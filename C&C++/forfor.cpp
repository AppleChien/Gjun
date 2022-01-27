#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=3;j++){
			cout<<i<<"  "<<j<<endl;
		}
	}
    for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			cout<<i<<"*"<<j<<"="<<i*j<<endl;
		}
	}


	return 0;
}

