package eclipse.JAVAHOME.Gjun.src;

public class A7_3 {
public static void main(String[] args) {}
		  
		public static int[][] addN(int A[][],int n){
		        for(int i=0;i<A.length;i++){
		        	for(int j=0;j<A[i].length;j++){
		        	A[i][j]=A[i][j]+n;
		        	}
		        }return A;	
}
}