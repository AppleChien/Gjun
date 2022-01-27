#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	char pwd[]="abc123";
	char c[20];
	int i;
	for(i=1;i<=3;i++){
		cout<<"input password:";
		cin>>c;
		if(strcmp(c,pwd)==0){
			cout<<"welcome"<<endl;
			break;
		}else{
			cout<<"error"<<endl;
		}
	}



	return 0;
}

