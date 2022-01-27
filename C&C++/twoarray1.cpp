#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int a[3][4];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			a[i][j]=i+j;
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}



	return 0;
}

