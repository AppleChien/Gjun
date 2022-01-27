package eclipse.JAVAHOME.Gjun.src;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class A5 {
	public static void main(String A[])throws IOException
	{
		  InputStreamReader isr=new InputStreamReader(System.in);
		  BufferedReader br=new  BufferedReader(isr);
		  System.out.print("請輸入算術運算子: ");
		  String oper =br.readLine();
		  System.out.print("1.請輸入n1: ");
		  String s1 =br.readLine();
		  int n1=Integer.parseInt(s1);
		  System.out.print("2.請輸入n2: "); 
		  String s2 =br.readLine();
		  int n2=Integer.parseInt(s2);
		  
		  switch (oper){
		  case "+":
			  System.out.println(n1+"+"+n2+"="+(n1+n2));
			  break;
		  case "-":
			  System.out.println(n1+"-"+n2+"="+(n1-n2));
			  break;
		  case "*":
			  System.out.println(n1+"*"+n2+"="+(n1*n2));
			  break;
		  case "/":
			  System.out.println(n1+"/"+n2+"="+(n1/n2));
			  break;
			 default:System.out.println("是未知的算術運算子!");

		  }
		  System.out.println("程式結束...");
	}

}
