#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int y,m;
	bool Y;
	cout<<"��J�褸�~�Τ��:";
	cin>>y>>m;
	Y=y%4==0&&y%100!=0||y%400==0;
//	cout<<Y<<endl;
	switch(Y) {
		case 1:
			cout<<"�|�~"<<endl;
			switch(m){
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
				 cout<<"31��"<<endl;
				 break;
			    case 4:
				case 6:
				case 9:
				case 11:
				 cout<<"30��"<<endl;
				 break;
				case 2:
				 cout<<"29��"<<endl;
				 break;	
			}
			break;
		case 0:
		    cout<<"���~"<<endl;
			switch(m){
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
				 cout<<"31��"<<endl;
				 break;
			    case 4:
				case 6:
				case 9:
				case 11:
				 cout<<"30��"<<endl;
				 break;
				case 2:
				 cout<<"28��"<<endl;
				 break;	
			} 
			break;
	}
	



	return 0;
}

