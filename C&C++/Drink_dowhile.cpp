#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
	 int item,qty,tal=0;
	 int sum=0;
	 
	do{

     cout<<"1.����"<<endl; 
     cout<<"2.���"<<endl; 
     cout<<"3.�@��"<<endl; 
     cout<<"4.���b"<<endl; 
     cout<<"�п��:"; 
     cin>>item;
     if(item>=1 && item<=3)
     {
     
     cout<<"�ƶq:"; 
     cin>>qty;
     }
     switch(item)
     {
     	case 1:
     		tal+=20*qty;
			cout<<"�`�@:"<<20*qty<<"��"<<endl;
			break; 
		case 2:
     		tal+=30*qty;
			cout<<"�`�@:"<<30*qty<<"��"<<endl;
			break; 
		case 3:
     		tal+=45*qty;
			cout<<"�`�@:"<<45*qty<<"��"<<endl;
			break; 
		case 4:
			cout<<"�`�p:"<<tal<<"��"<<endl;
			break; 
		default:
			cout<<"input error"<<endl;
     }
    
}while( item!=4 ); 
     
     



	return 0;
}

