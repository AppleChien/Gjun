
int tal(int c,int e,int m){
	return c+e+m;
}

double avg(int c,int e,int m){
	return (c+e+m)/3.0;
}

char grade(double a){
	char g;
	if(a>=90){
		g='A';
	}else if(a>=80&&a<90){
		      g='B';
	      }else if(a>=70&&a<80){
		           g='C';
	            }else if(a>=60&&a<70){
		                g='D';
	                  }else{
		                 g='E';
	                    }
	return g;
}
