#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int m;
	cout<<"輸入月份:";
	cin>>m; 
    switch(m){
    	case 3:
    	case 4:
    	case 5:
    		cout<<"春天"<<endl;
			break;
		case 6:
    	case 7:
    	case 8:
    		cout<<"夏天"<<endl;
			break; 
		case 9:
    	case 10:
    	case 11:
    		cout<<"秋天"<<endl;
			break; 
		case 12:
    	case 1:
    	case 2:
    		cout<<"冬天"<<endl;
			break; 
		default:
		cout<<"input error"<<endl; 
    }


	return 0;
}

