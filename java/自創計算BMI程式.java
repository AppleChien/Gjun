package eclipse.JAVAHOME.Gjun.src;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class A1 {

	public static void main(String A[])throws IOException
{
	  InputStreamReader isr=new InputStreamReader(System.in);
	  BufferedReader br=new  BufferedReader(isr);
	  
	  System.out.print("請輸入身高: ");
	  String s1 =br.readLine();
	  System.out.print("請輸入體重: ");
	  String s2 =br.readLine();

	
      double h=Double.parseDouble(s1);
	  double w=Double.parseDouble(s2);
      double bmi=w/(h/100*h/100);
      
      System.out.println("身高:"+h+"公分\n體重:"+w+"公斤\nBMI;"+bmi);
  }
}

     
      


