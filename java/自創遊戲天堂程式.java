package eclipse.JAVAHOME.Gjun.src;
import java.io.IOException;

public class Game extends loto{
	public Game(int n) {
		super(n);
   }public int userInput() throws IOException{
		    System.out.print("[�C���Ѱ�]\n1.�ۿ�B2.�H��:�B3.�׷��K�X:�B4.�p��BMI ");
		    String s=br.readLine();
		    int usr=Integer.parseInt(s);
		    return usr;
		}
	   public void platform(int usr) throws IOException{
		      switch(usr){
		       case 1:
		         selfLoto();
		        break;
		       case 2:
		         randomLoto();
		        break;
		       case 3:
			     Math();
			     break;
		       case 4:
				break;
		       default:
		         System.out.println("�L"+usr+"�ﶵ!");
		}
	   }
		public void Math() throws IOException{
			int pc=(int)(Math.random()*100+1),L=1,R=100,user;	
			
			  do{
				  System.out.print("�п�J"+L+"~"+R+":");
				  String s1=br.readLine();
				  user=Integer.parseInt(s1);
				  if(user==pc)
					  System.out.println("���ߵ���!PC="+pc);
				  else{
					  System.out.println("��p����!");
					  if(user>pc)
						  R=user;
					  else
						  L=user;
				  }
				  }while(user!=pc);
			  

		
		}}

		
	
	

