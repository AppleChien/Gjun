
int sum(int n){
	int i,s=0;
	for(i=1;i<=n;i++){
		s+=i;
	}
	return s;
}

double STDweight(double h,char c){
	if(c=='m'||c=='M'){
		return (h-80)*0.7;
	}else{
		return (h-70)*0.6;
	}
}
