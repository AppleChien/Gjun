#include<iostream>
using namespace std;
#include <stdio.h>
int main(){
	int money;
	double rate,sum;
//	cout<<"�п�J����,�C�v";
    printf("�п�J����:");
//  cin>>money>>rate;
    scanf("%d %lf",&money,&rate); 
	sum=money*(1+rate);
	printf("����:%10d\n",money);
	printf("�Q�v:%.8lf\n",rate);
	printf("���Q�M:%.2lf\n",sum);
//	cout<<"���Q�M="<<sum<<endl; 
	
	
	
	return 0;
}
