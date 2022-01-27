#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int a[6];
	int i;
	double tal=0,avg;
	for(i=0;i<6;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
		tal+=a[i];
	}
    avg=tal/6;
    cout<<"tal="<<tal<<endl;
    cout<<"avg="<<avg<<endl;

	return 0;
}

