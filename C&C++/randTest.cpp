#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,n;
	srand(time(NULL));
	for(i=1;i<=10;i++){
		n=rand()%10+1;
		cout<<n<<endl;
	}



	return 0;
}

