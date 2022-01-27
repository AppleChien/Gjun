#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int s;
	cout<<"input score:";
	cin>>s;
	if(s>=0&&s<=100){
		if(s>=60){
			cout<<"及格"<<endl;
		}else{
			cout<<"不及格"<<endl;
		}
	}else{
		cout<<"input error"<<endl; 
	}



	return 0;
}

