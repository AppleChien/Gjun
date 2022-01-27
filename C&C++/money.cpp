#include<iostream>
using namespace std;
int main(){
	int money;
	double rate,sum;
	cout<<"請輸入本金,列率";
	cin>>money>>rate;
	sum=money*(1+rate);
	cout<<"本利和="<<sum<<endl; 
	
	
	
	return 0;
}
