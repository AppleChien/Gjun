package eclipse.JAVAHOME.Gjun.src;

public class A6 {

	public static void main(String[] args) {
		
		  for(int i=10;i>=1;i--)
		  {
			  for(int j=1;j<=i-1;j++)
			  {
				System.out.print("*");
			  }
			     System.out.println();
		  }
		  
		  for(int i=10;i>=1;i--)
		  {
			   for(int j=1;j<=10;j++)
			   {
			   if(j<i)
				System.out.print(" ");
			   else
		        System.out.println(j);   
		  }
		   System.out.println("i= "+i);
	}
	
}
}