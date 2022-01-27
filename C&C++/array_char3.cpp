#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	char c1[]={'d','e','v','_','c','+','+','\0'};
	char c2[]="dev_c++";
	cout<<strcmp(c1,c2)<<endl;
    
    if(strcmp(c1,c2)==0){
    	cout<<"相同"<<endl;
    }else{
    	cout<<"不同"<<endl;
    }


	return 0;
}

