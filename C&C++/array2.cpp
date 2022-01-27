#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int x[]={63,51,70,55,42,76,95,60};
	int i,min,max;
	min=max=x[0];
	int n=sizeof(x)/sizeof(int);
	cout<<"sizeof(x)="<<sizeof(x)<<endl;
	cout<<"sizeof(int)="<<sizeof(int)<<endl;
	for(i=1;i<n;i++){
		if(x[i]>max){
			max=x[i];
		}
		if(x[i<min]){
			min=x[i];
		}
	}
    cout<<"min="<<min<<endl;
    cout<<"max="<<max<<endl;


	return 0;
}

