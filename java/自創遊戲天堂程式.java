package eclipse.JAVAHOME.Gjun.src;
import java.io.IOException;

public class Game extends loto{
	public Game(int n) {
		super(n);
   }public int userInput() throws IOException{
		    System.out.print("[遊戲天堂]\n1.自選、2.隨機:、3.終極密碼:、4.計算BMI ");
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
		         System.out.println("無"+usr+"選項!");
		}
	   }
		public void Math() throws IOException{
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

		
	
	

