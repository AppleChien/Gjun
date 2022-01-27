package eclipse.JAVAHOME.Gjun.src;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class A3 {
	public static void main(String A[])throws IOException
	{
		  InputStreamReader isr=new InputStreamReader(System.in);
		  BufferedReader br=new  BufferedReader(isr);
		  System.out.print("請輸入姓名: ");
		  String name =br.readLine();
		  System.out.print("1.請輸入國文: ");
		  String s1 =br.readLine();
		  System.out.print("2.請輸入英文: "); 
		  String s2 =br.readLine();
		  System.out.print("3.請輸入數學: "); 
		  String s3 =br.readLine();
		  int n1=Integer.parseInt(s1);
		  int n2=Integer.parseInt(s2);
		  double n3=Double.parseDouble(s3);
		  double sum=n1+n2+n3;
		  double avg=sum/3;
		  System.out.println("姓名:"+name+"\n國文"+s1+"\n英文:"+s2+"\n數學:"+s3);
		  System.out.println("總分:"+sum+" 平均:"+avg);
		  if(avg>=60)
			  System.out.println("恭喜及格!");
		  if(avg<60)
	          System.out.println("抱歉不及格!");
		  

		  if(avg>=90 && avg<=100)
			  System.out.println("A");
		  else if(avg>=80 && avg<90)
			  System.out.println("B");
		       else if(avg>=70 && avg<80)
			  System.out.println("C");
		            else if(avg>=60 && avg<70)
			  System.out.println("D");
		                 else if(avg>=0 && avg<60)
			  System.out.println("E");
		  
		  if(avg>=90 && avg<=100)
			  System.out.println("A");
		  if(avg>=80 && avg<90)
			  System.out.println("B");
		  if(avg>=70 && avg<80)
			  System.out.println("C");
		  if(avg>=60 && avg<70)
			  System.out.println("D");
		  if(avg>=0 && avg<60)
			  System.out.println("E");
		  
		  
		  int level=(int)(avg/10);
		  switch (level){
		  case 10:
			  System.out.println("A");
			  break;
		  case 9:
			  System.out.println("A");
			  break;
		  case 8:
			  System.out.println("B");
			  break;
		  case 7:
			  System.out.println("C");
			  break;
		  case 6:
			  System.out.println("D");
			  break;
			 default:System.out.println("E");

		  }
		  System.out.println("程式結束...");
	}
}		 
	
