#include<iostream>
using namespace std;
#include<stdio.h>
#include<math.h>
int main(){
	double w,h,H,BMI;
	cout<<"請輸入身高及體重:";
	cin>>h>>w;
	H=h/100;
	BMI=w/(pow(H,2));
	cout<<"BMI:"<<BMI<<endl;
	if(BMI<18.5){
		cout<<"太輕"<<endl; 
	}else if(BMI<24){
		cout<<"正常"<<endl; 
	}else if(BMI<27){
		cout<<"過重"<<endl; 
	}else if(BMI<30){
		cout<<"輕度肥胖"<<endl; 
	}else{
		cout<<"肥胖"<<endl;
	}



	return 0;
}

