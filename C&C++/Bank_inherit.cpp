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
	 	cout<<"����"<<m<<"��"<<endl; 
	 }
	 void Saving(int m){
	 	balance+=m;
	 	cout<<"�s��"<<m<<"��"<<endl;
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
	 		cout<<"�s�ڤ����L�k����"<<endl; 
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
	cout<<"�}����B:";
	cin>>money;
	Withdraw* w=new Withdraw(account,money);
	cout<<"�b��:"<<w->getAccount()<<endl;
	cout<<"�l�B:"<<w->getbalance()<<endl;
	w->getMoney(6000);
	cout<<"�l�B:"<<w->getbalance()<<endl;
	w->Saving(4000);
	cout<<"�l�B:"<<w->getbalance()<<endl;
	w->getMoney(200);
	cout<<"�l�B:"<<w->getbalance()<<endl;
	
	
	
	



	return 0;
}

