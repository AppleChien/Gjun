#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
	int u,d,h;
	double area;
	printf("�п�J�W��,�U��,��");
//	cout<<"�п�J�W��,�U��,��";
    scanf("%d %d %d",&u,&d,&h);
//	cin>>u>>d>>h;
	area=(u+d)*h/2.0;
//	cout<<"��έ��n="<<area<<endl; 
	printf("��έ��n:%.1lf\n",area);
	
	
	return 0;
}
