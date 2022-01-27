#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int a[3][3]={{5,9,7},{1,6,4},{2,8,3}};
	int b[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			b[i][j]=a[j][i];
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}



	return 0;
}

