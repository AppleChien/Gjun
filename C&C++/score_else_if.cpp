#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int s;
	cout<<"input score:";
	cin>>s;
	if(s>=0&&s<=100){
		if(s>=90){
			cout<<"A"<<endl;
		}else if(s>=80){
			cout<<"B"<<endl;
		}else if(s>=70){
			cout<<"C"<<endl;
		}else if(s>=60){
			cout<<"D"<<endl;
		}else{
			cout<<"E"<<endl;
		}
	}else{
		cout<<"input error"<<endl; 
	}



	return 0;
}

