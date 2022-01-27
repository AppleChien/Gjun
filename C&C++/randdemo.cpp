#include<iostream>
using namespace std;
#include<time.h>
#include<stdlib.h>
int main(){
	int i,k;
	srand(time(NULL));
	for(i=0;i<=10;i++){
		k=rand()%6+1;
		cout<<k<<endl;
	}
	



	return 0;
}

