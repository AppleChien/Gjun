package eclipse.JAVAHOME.Gjun.src;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class A3 {
	public static void main(String A[])throws IOException
	{
		  InputStreamReader isr=new InputStreamReader(System.in);
		  BufferedReader br=new  BufferedReader(isr);
		  System.out.print("�п�J�m�W: ");
		  String name =br.readLine();
		  System.out.print("1.�п�J���: ");
		  String s1 =br.readLine();
		  System.out.print("2.�п�J�^��: "); 
		  String s2 =br.readLine();
		  System.out.print("3.�п�J�ƾ�: "); 
		  String s3 =br.readLine();
		  int n1=Integer.parseInt(s1);
		  int n2=Integer.parseInt(s2);
		  double n3=Double.parseDouble(s3);
		  double sum=n1+n2+n3;
		  double avg=sum/3;
		  System.out.println("�m�W:"+name+"\n���"+s1+"\n�^��:"+s2+"\n�ƾ�:"+s3);
		  System.out.println("�`��:"+sum+" ����:"+avg);
		  if(avg>=60)
			  System.out.println("���ߤή�!");
		  if(avg<60)
	          System.out.println("��p���ή�!");
		  

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
		  System.out.println("�{������...");
	}
}		 
	
