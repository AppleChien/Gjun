#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>
int main(){
	int n;
	srand(time(NULL));
	cout<<"輸入n:";
	cin>>n;
	int a[n][n];
	int i,j,sum=0;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=rand()%10;
			cout<<a[i][j]<<" ";
			if(i==j){
		       sum+=a[i][j];
            }      
		}
		 
		cout<<endl;
		
	}
	 
	
    cout<<"對角線之和:"<<sum<<endl;


	return 0;
}

