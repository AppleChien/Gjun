#include<iostream>
using namespace std;
#include<math.h>
int main(){
	double BMI(int h,int w);

	cout<<"input h,w:";
	int h,w;
	cin>>h>>w;
	cout<<"BMI="<<BMI(h,w)<<endl;
	
	return 0;
}
double BMI(int h,int w){
	double x=h/100.0;
	double ans;
	ans=w/pow(x,2);
	return ans;
}

