package eclipse.JAVAHOME.Gjun.src;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class A4
{
	public static void main(String A[])throws IOException
	{
	InputStreamReader isr=new InputStreamReader(System.in);
	  BufferedReader br=new  BufferedReader(isr);
	  System.out.print("1.�п�J��l��: ");
	  String s1 =br.readLine();
	  int start=Integer.parseInt(s1);
	  while(start<0){
		  System.out.print("1.�п�J��l��: ");
          s1=br.readLine();
          start=Integer.parseInt(s1);
	}
	      
	  int end;
	  do {
		  System.out.print("2.�п�J�פ��: ");
		  String s2 =br.readLine();
		  end=Integer.parseInt(s2);
	  }while(end<0||end<start);
	  
	  int i,sum=0,count=0;
	  for(i=start;i<=end;i=i+1){
		  if(i%2==0 || i%3==0){
		  sum=sum+i;
		  count=count+1;
		  System.out.print(i+" ");
	  }
	  System.out.println("\nfor�j�餤�_��,i="+i+" sum="+sum+ "count="+count);
	  
	  i=start;sum=0;
	  while(i<=end){
		  sum=sum+i;
			 System.out.print(i+" ");
		     i=i+1;
	  }
	  System.out.println("\nwhile�j�餤�_��,i="+i+" sum="+sum);
	 
	  i=start;sum=0;
	  do {
		  sum=sum+i;
			 System.out.print(i+" ");
		     i=i+1;
	  }while(i<=end);
	  System.out.println("\ndowhile�j�餤�_��,i="+i+"sum="+sum);
	  }
}	
}
	
 