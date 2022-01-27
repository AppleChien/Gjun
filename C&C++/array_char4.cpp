#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	char c[20];
	cout<<"input:";
	cin>>c;
	int n=strlen(c);
	int i;
	for(i=n;i>=0;i--){
		cout<<c[i];
	}
	



	return 0;
}

