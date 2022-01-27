#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	char account[][20]={"joe","peter","bill","kelly","sam"};
	char password[][20]={"j123","p123","b123","k123","s123"};
	char user[20],pwd[20];
	cout<<"input account:";
	cin>>user;
	cout<<"input password:";
	cin>>pwd;
//	bool find=0;   //先設定還沒找到資料 (做記號)
	int i;
	for(i=0;i<5;i++){
		if(strcmp(user,account[i])==0){
//			find=1;
			if(strcmp(pwd,password[i])==0){
				cout<<"welcome"<<endl;
			}else
				cout<<"password error"<<endl;
				break;
			
		}
	}
	
	if(strcmp(user,account[i])!=0){
		cout<<"account error"<<endl;
	}
//    if(i==5)
//	   cout<<"account error"<<endl;	
//	if( find==0 )
//        cout<<"account error"<<endl;	



	return 0;
}

