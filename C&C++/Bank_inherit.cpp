#include<iostream>
using namespace std;
#include<stdio.h>
class Bank{
	private:
	 char* account;
	 int balance;
	public:
	 Bank(){
	 }
	 Bank(char* c,int b):account(c),balance(b){
	 	
	 }
	 char * getAccount(){
	 	return account;
	 }
	 int getbalance(){
	 	return balance;
	 }
	 void getMoney(int m){
	 	balance-=m;
	 	cout<<"提款"<<m<<"元"<<endl; 
	 }
	 void Saving(int m){
	 	balance+=m;
	 	cout<<"存款"<<m<<"元"<<endl;
	 }
	 ~Bank(){
	 	delete account;
	 }
};

class Withdraw:public Bank{
	public :
	 Withdraw(){
	 }
	 Withdraw(char* ac,int bal):Bank(ac,bal){
	 	
	 }
	 void getMoney(int x){
	 	if(x>getbalance()){
	 		cout<<"存款不足無法提款"<<endl; 
	 	}else{
	 		Bank::getMoney(x);
	 	}
	 }
	 ~Withdraw(){
	 	
	 }
	
};




int main(){
	char account[20];
	int money;
	cout<<"input account:";
	cin>>account;
	cout<<"開戶金額:";
	cin>>money;
	Withdraw* w=new Withdraw(account,money);
	cout<<"帳號:"<<w->getAccount()<<endl;
	cout<<"餘額:"<<w->getbalance()<<endl;
	w->getMoney(6000);
	cout<<"餘額:"<<w->getbalance()<<endl;
	w->Saving(4000);
	cout<<"餘額:"<<w->getbalance()<<endl;
	w->getMoney(200);
	cout<<"餘額:"<<w->getbalance()<<endl;
	
	
	
	



	return 0;
}

