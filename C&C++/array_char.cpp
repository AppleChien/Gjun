#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	char c[20];
    cout<<"input:";
    cin>>c;
    cout<<c<<endl;
    
    int i=0;
    while(c[i]!='\0'){
    	if(c[i]>=97&&c[i]<=122){
    		c[i]-=32;
    	}
    	cout<<c[i]<<"  ";
    	i++;
    }


	return 0;
}

