package eclipse.JAVAHOME.Gjun.src;

public class A8 {

	public static void main(String[] args) {
	   star();
	   starK(58);
	   starA(12.3);
	   starS(5,9.7);
	   int A[]={12,23,34,45,56,67};
	   sumArray(A);
	   int B[]=addArray(A,100);
	   for (int i=0;i<B.length;i++){
	   System.out.println("B["+i+"]="+B[i]);
	   }
	   int C[][]={{111,222,333,444},{555,666,777},{888,999}};
	   int D[][]=addN(C,1000);
	   for(int i=0;i<D.length;i++){
		   for(int j=0;j<D[i].length;j++){
			   System.out.print(D[i][j]+"  ");    
		   }
	   }System.out.println();
	}
	public static void star(){
		for(int i=1;i<=10;i++){
			System.out.print("*");
		}System.out.println();
	}
    public static int starK(int m){
        for(int i=1;i<=m;i++){
		    System.out.print("*");
	    }System.out.println("m="+m);
	     return m;
    }
    public static void starA(double n){
		for(int i=1;i<=n;i++){
			System.out.print("*");
		}System.out.println("n="+n);
    }
    public static double starS(int x ,double y){
        for(int i=1;i<=x+y;i++){
		    System.out.print("*");
	    }System.out.println("x="+x+"y="+y);
	     return x+y;
    }
    public static void sumArray(int A[]){
    	int sum=0;
    	for(int i=0;i<A.length;i++){
    		sum=sum+A[i];
    		System.out.println("A["+i+"]="+A[i]);
    	}System.out.println();
    }
    public static int[] addArray(int A[],int n){
    	for(int i=0;i<A.length;i++){
    		A[i]=A[i]+n;
    	}return A;
    }
    public static int[][] addN(int A[][],int n){
        for(int i=0;i<A.length;i++){
        	for(int j=0;j<A[i].length;j++){
        	A[i][j]=A[i][j]+n;
        	}
        }return A; 	
    }
    }



