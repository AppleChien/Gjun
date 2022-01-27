package eclipse.JAVAHOME.Gjun.src;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class A5_3 {

	public static void main(String A[])throws IOException
	{
	InputStreamReader isr=new InputStreamReader(System.in);
	BufferedReader br=new  BufferedReader(isr);
	  
	  int pc=(int)(Math.random()*100+1),L=1,R=100,user;	
	
	  do{
		  System.out.print("請輸入"+L+"~"+R+":");
		  String s1=br.readLine();
		  user=Integer.parseInt(s1);
		  if(user==pc)
			  System.out.println("恭喜答對!PC="+pc);
		  else{
			  System.out.println("抱歉答錯!");
			  if(user>pc)
				  R=user;
			  else
				  L=user;
		  }
		  }while(user!=pc);
	  }}