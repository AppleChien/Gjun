package eclipse.JAVAHOME.Gjun.src;

public class A10 {

	public static void main(String[] args) {
		int A[]=new int [5];
		try{
			A[10]=2;
		}catch(Exception e){
			System.out.println("繼續操作");
		}
         finally{
        	 System.out.println("程式結束");
         }
		int s=4,l=1;
		System.out.println(s+"/"+l+"="+(s/l));
		try{
			System.out.println(s+"/"+l+"="+(s/l));
		}catch(Exception e){
			System.out.println("繼續操作");
		}
	}
}
