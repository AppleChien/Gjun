#include<iostream>
using namespace std;
#include<stdio.h>
#include<math.h>
int main(){
	double w,h,H,BMI;
	cout<<"�п�J�������魫:";
	cin>>h>>w;
	H=h/100;
	BMI=w/(pow(H,2));
	cout<<"BMI:"<<BMI<<endl;
	if(BMI<18.5){
		cout<<"�ӻ�"<<endl; 
	}else if(BMI<24){
		cout<<"���`"<<endl; 
	}else if(BMI<27){
		cout<<"�L��"<<endl; 
	}else if(BMI<30){
		cout<<"���תέD"<<endl; 
	}else{
		cout<<"�έD"<<endl;
	}



	return 0;
}

