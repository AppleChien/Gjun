#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	double i,j;
	double sum=0;
	i=-1,j=0;
	while(j<100){
	  i+=2;
//	  cout<<i<<endl;
	  j+=5;
//	  cout<<j<<endl;
	  
	  cout<<i<<"/"<<j<<"="<<sum<<endl;
	  sum+=i/j;	
	}
	
     cout<<"sum="<<sum;
    

	return 0;
}

