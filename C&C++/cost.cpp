#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int i,c,d;
	cout<<"���{��:";
	cin>>i;
	if(i<=1500){
		c=70;
	}else{
		d=i-1500;
		if(d%500==0)
		  c=70+(d/500)*5;
		 else{
		 	c=70+((d/500)+1)*5;
		 }
	}

     cout<<"�O�ά�:"<<c<<endl;

	return 0;
}

