#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int n;
	
	
	do{
		cout<<"��J�Ʀr:";
		cin>>n;
		if(n>=7||n<=0){
		  cout<<"Error!!!�A��J�@��"<<endl;
		}else{
			cout<<n<<endl;
		}
		
	}while(n>=7||n<=0);
	 
	 
    
	return 0;
}

