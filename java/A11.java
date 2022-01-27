package eclipse.JAVAHOME.Gjun.src;

class Ctest implements Runnable{
	String id;
	Ctest(String id){
		this.id=id;
	}
	public void run(){
		for(int i=1;i<=4;i++){
			int timer=(int)(Math.random()*1000);
            try{
            	Thread.sleep(timer);
            } catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}

			System.out.println(id+" is running...timer="+timer);
		}
	}
}

public class A11 {

	public static void main(String[] args) {
		Ctest c1=new Ctest("dog");
		Ctest c2=new Ctest("cat");
		Thread t1=new Thread(c1);
		Thread t2=new Thread(c2);
		t1.start();
		try {
			t1.join();
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		t2.start();
		try {
			t2.join();
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		int a=155,b=9;
		System.out.println(a+"/"+b+"="+a/b);
		System.out.println("主程式結束");		
	}
}


/*
 class Ctest extends Thread{
	String id;
	Ctest(String id){
		this.id=id;
	}
	public void run(){
		for(int i=1;i<=4;i++){
			for(int j=1;j<=199999999;j++);
			System.out.println(id+"is running...");
		}
	}
 
 */



