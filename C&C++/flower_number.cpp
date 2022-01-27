#include<iostream>
using namespace std;
#include<stdio.h>
#include<math.h>
int main(){
	int i,j,k;
	for(i=1;i<=9;i++){
		for(j=0;j<=9;j++){
			for(k=0;k<=9;k++){
				if(100*i+10*j+k==pow(i,3)+pow(j,3)+pow(k,3)){
					cout<<100*i+10*j+k<<"="<<i*i*i<<"+"<<j*j*j<<"+"<<k*k*k<<endl; 
				}
			}
		}
	}
	cout<<endl;
    
    int a,b,c;

    for(i=100;i<=999;i++){
	  a=i/100;
      b=i/10%10;
      c=i%10;
      
      if(i==pow(a,3)+pow(b,3)+pow(c,3)){
					cout<<100*a+10*b+c<<"="<<a*a*a<<"+"<<b*b*b<<"+"<<c*c*c<<endl; 
				}
    }


	return 0;
}

