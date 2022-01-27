#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int m,s;
	char n;
	cout<<"請選擇:  數量:";
	cin>>n>>m;
	switch(n){
		case '1':
			s=m*35;
			cout<<"您點了"<<m<<"杯紅茶,價格為"<<s<<"元"<<endl;
			break;
		case '2':
			s=m*40;
			cout<<"您點了"<<m<<"杯綠茶,價格為"<<s<<"元"<<endl;
		    break;
		case '3':
			s=m*55;
			cout<<"您點了"<<m<<"杯咖啡,價格為"<<s<<"元"<<endl;
		    break;
		    default:
		    cout<<"請重新輸入"<<endl; 
	}
        


	return 0;
}

