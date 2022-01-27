#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	double i,n,sum=0;
	cout<<"input n:";
	cin>>n;
	i=1;
	while(i<=n){
		sum+=i/n;
		cout<<i<<"/"<<n<<"="<<sum<<endl;
		i++;
	}
	
    cout<<"sum="<<sum<<endl;


	return 0;
}

