#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int m;
	cout<<"��J���:";
	cin>>m; 
    switch(m){
    	case 3:
    	case 4:
    	case 5:
    		cout<<"�K��"<<endl;
			break;
		case 6:
    	case 7:
    	case 8:
    		cout<<"�L��"<<endl;
			break; 
		case 9:
    	case 10:
    	case 11:
    		cout<<"���"<<endl;
			break; 
		case 12:
    	case 1:
    	case 2:
    		cout<<"�V��"<<endl;
			break; 
		default:
		cout<<"input error"<<endl; 
    }


	return 0;
}

