#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int m,s;
	char n;
	cout<<"�п��:  �ƶq:";
	cin>>n>>m;
	switch(n){
		case '1':
			s=m*35;
			cout<<"�z�I�F"<<m<<"�M����,���欰"<<s<<"��"<<endl;
			break;
		case '2':
			s=m*40;
			cout<<"�z�I�F"<<m<<"�M���,���欰"<<s<<"��"<<endl;
		    break;
		case '3':
			s=m*55;
			cout<<"�z�I�F"<<m<<"�M�@��,���欰"<<s<<"��"<<endl;
		    break;
		    default:
		    cout<<"�Э��s��J"<<endl; 
	}
        


	return 0;
}

