#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	char c[5][20];
	int i;
	for(i=0;i<5;i++){
		cout<<"²Ä"<<(i+1)<<"­Ó¦r¦ê:";
		cin>>c[i]; 
	}
    
    for(i=0;i<5;i++){
    	cout<<c[i]<<endl;
    }


	return 0;
}

