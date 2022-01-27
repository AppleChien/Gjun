#include <iostream>
using namespace std;
#include <math.h>
int main(){


    int r[]={5,10,18,23,35};
    int n=sizeof(r)/sizeof(int);
    double area[n];
    int i;
    for(i=0;i<n;i++){
    

    	area[i]=3.14159*pow(r[i],2);
    	cout<<r[i]<<"   "<<area[i]<<endl;
    }
}
