package eclipse.JAVAHOME.Gjun.src;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class A5_2 {
	public static void main(String A[])throws IOException
	{
	InputStreamReader isr=new InputStreamReader(System.in);
	BufferedReader br=new  BufferedReader(isr);
	  
	  int n1,n2,user,i=1,level=1,count=3;	
	  
	  do{
		  n1=(int)(Math.random()*10+1);
		  n2=(int)(Math.random()*10+1);
		  switch(level){
		  case 1:
			  System.out.print("第"+i+"題:"+n1+"+"+n2+"=");
			  String s1=br.readLine();
			  user=Integer.parseInt(s1);
			  if(user==n1+n2){
				  level=level+1;
				  count=3;
				  System.out.println("恭喜答對!");
			  }else
				  System.out.println("抱歉答錯");	
			  break; 
	      case 2:
		  System.out.print("第"+i+"題:"+n1+"-"+n2+"=");
		  s1=br.readLine();
		  user=Integer.parseInt(s1);
		  if(user==n1-n2){
			  level=level+1;
			  count=3;
			  System.out.println("恭喜答對!");
		  }else{
			  System.out.println("抱歉答錯!剩"+count+"次機會");
		      if (count==0){
		    	  level=level-1;
		    	  count=3;
		       }
		      }
		  break; 
		  case 3:
			  System.out.print("第"+i+"題:"+n1+"*"+n2+"=");
			  s1=br.readLine();
			  user=Integer.parseInt(s1);
			  if(user==n1*n2){
				  level=level+1;
				  count=3;
				  System.out.println("恭喜答對!");
			  }else{
				  System.out.println("抱歉答錯!剩"+count+"次機會");
			      if (count==0){
			    	  level=level-1;
			    	  count=3;
			       }
			      }
			  break;
			  case 4:
				  System.out.print("第"+i+"題:"+n1+"/"+n2+"=");
				  s1=br.readLine();
				  user=Integer.parseInt(s1);
				  if(user==n1/n2){
					  level=level+1;
					  count=3;
					  System.out.println("恭喜答對!");
				  }else{
					  System.out.println("抱歉答錯!剩"+count+"次機會");
				      if (count==0){
				    	  level=level-1;
				    	  count=3;
				       }
}
				  break; 
		  }  
		          i=i+1;
	           }while(level!=5);
	        
	  System.out.println("遊戲結束...");
	  }}



	
