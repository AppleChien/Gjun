#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
	 int item,qty,tal=0;
	 int sum=0;
	 
	do{

     cout<<"1.紅茶"<<endl; 
     cout<<"2.綠茶"<<endl; 
     cout<<"3.咖啡"<<endl; 
     cout<<"4.結帳"<<endl; 
     cout<<"請選擇:"; 
     cin>>item;
     if(item>=1 && item<=3)
     {
     
     cout<<"數量:"; 
     cin>>qty;
     }
     switch(item)
     {
     	case 1:
     		tal+=20*qty;
			cout<<"總共:"<<20*qty<<"元"<<endl;
			break; 
		case 2:
     		tal+=30*qty;
			cout<<"總共:"<<30*qty<<"元"<<endl;
			break; 
		case 3:
     		tal+=45*qty;
			cout<<"總共:"<<45*qty<<"元"<<endl;
			break; 
		case 4:
			cout<<"總計:"<<tal<<"元"<<endl;
			break; 
		default:
			cout<<"input error"<<endl;
     }
    
}while( item!=4 ); 
     
     



	return 0;
}

