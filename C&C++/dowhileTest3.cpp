#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int n;
	
	
	do{
		cout<<"輸入數字:";
		cin>>n;
		if(n>=7||n<=0){
		  cout<<"Error!!!再輸入一次"<<endl;
		}else{
			cout<<n<<endl;
		}
		
	}while(n>=7||n<=0);
	 
	 
    
	return 0;
}

