#include<iostream>
using namespace std;
#include <stdio.h>
int main(){
	int money;
	double rate,sum;
//	cout<<"請輸入本金,列率";
    printf("請輸入本金:");
//  cin>>money>>rate;
    scanf("%d %lf",&money,&rate); 
	sum=money*(1+rate);
	printf("本金:%10d\n",money);
	printf("利率:%.8lf\n",rate);
	printf("本利和:%.2lf\n",sum);
//	cout<<"本利和="<<sum<<endl; 
	
	
	
	return 0;
}
