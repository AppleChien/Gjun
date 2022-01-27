#include<iostream>
using namespace std;
#include<math.h>
int main(){
	int h[]={172,165,158,150,168};
	int w[]={75,83,60,95,72};
	int i=sizeof(h)/sizeof(int);
	int x,y;
	double bmi[5];
	double max,min,a;
	for(i=0;i<5;i++){
		a=h[i]/100.0;
			bmi[i]=w[i]/pow(a,2);
			cout<<"bmi["<<i<<"]="<<bmi[i]<<endl;

	}
	max=min=bmi[0];
    
    for(i=0;i<5;i++){
  
    		if(bmi[i]>max){
    			x=i;
    			max=bmi[i];
    			 
    		}
    		if(bmi[i]<min){
    			y=i;
    			min=bmi[i];
    			 
    		}
    }
    cout<<"第"<<(x+1)<<"位最胖!"<<endl;
    cout<<"第"<<(y+1)<<"位最瘦!"<<endl;
    cout<<"min="<<min<<endl;
    cout<<"max="<<max<<endl;

	return 0;
}

