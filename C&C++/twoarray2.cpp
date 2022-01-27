#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int a[2][3]={{2,1,1},{1,0,1}};
	int b[2][3]={{1,0,1},{2,3,0}};
	int c[2][3];
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}



	return 0;
}

