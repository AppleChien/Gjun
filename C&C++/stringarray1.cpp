#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	char c[5][20];
	int i;
	for(i=0;i<5;i++){
		cout<<"��"<<(i+1)<<"�Ӧr��:";
		cin>>c[i]; 
	}
    
    for(i=0;i<5;i++){
    	cout<<c[i]<<endl;
    }


	return 0;
}

