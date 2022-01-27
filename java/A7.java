package eclipse.JAVAHOME.Gjun.src;

public class A7 {

	public static void main(String[] args) {
	   int a;
	   a=20;
	System.out.println("a="+a);
	   
	   int A[]=new int[5];
	   System.out.println("A.length="+A.length);
	   
	   A[0]=10;
	   A[2]=20;
	   A[3]=30;
	   System.out.println("A[0]="+A[0]);
	   System.out.println("A[1]="+A[1]);
	   System.out.println("A[2]="+A[2]);
	   System.out.println("A[3]="+A[3]);
	   System.out.println("A[4]="+A[4]);
	   System.out.println("A.length="+A.length);
	   for (int i=0;i<A.length;i++){
	      System.out.println("A["+i+"]="+A[i]);
	      
	   int B[]={10,0,20,30,0};
       System.out.println("B.length="+B.length);
       int j;
	   for (i=0;i<B.length;i++){
	      System.out.println("B["+i+"]="+B[i]);
	      
	   int C[][]=new int[4][3];
	   C[0][1]=100;
	   C[1][0]=200;     
	   C[2][1]=300;   
	   C[3][2]=400;
	   System.out.println("C[][]列數:"+4);
	   for (i=0;i<4;i++){
	      System.out.print("第"+i+"列長度:"+3+" ");
	      for (j=0;j<4;j++);
	      System.out.print(C[i][j]+"  ");
	   }
	   System.out.println();
	}
       int D[][]={{111,222,333},{3333,444},{22},{666,777}};
       System.out.println("D[][]列數:"+D.length);
       for(i=0;i<D.length;i++){
 	      System.out.print("第"+i+"列長度:"+D[i].length+" ");
 	      for (j=0;j<D[i].length;j++);
 	      System.out.print(D[i][j]+" ");
 	   }
 	   System.out.println();
	   }}      
}
