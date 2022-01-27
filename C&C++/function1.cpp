#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int f(int x);
	cout<<f(2)<<endl;
    cout<<f(3)<<endl;


	return 0;
}

int f(int x){
	int ans;
//	ans=x*x+5;
    int power(int a,int b);
    ans=power(x,2)+5;
	return ans;
} 

int power(int a,int b){
	int i,sum=1;
	for(i=1;i<=b;i++){
		sum*=a;
	}
	return sum;
}
