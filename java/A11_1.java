package eclipse.JAVAHOME.Gjun.src;
class Bank{
	static int sum;
	static synchronized void addN(int n){
		int tmp=sum;
		tmp=tmp+n;
		try {
			Thread.sleep((int)(Math.random()*1000));
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		sum=tmp;
		System.out.println("sum="+sum);
	}
}
class Customer implements Runnable{

	@Override
	public void run() {
		for(int i=1;i<=3;i++){
			Bank.addN(100);
		}
	}
}

public class A11_1 {

	public static void main(String[] args) {
		Customer c1=new Customer();
		Customer c2=new Customer();
		Thread t1=new Thread(c1);
		Thread t2=new Thread(c2);
        t1.start();
        t2.start();
	}

}
