package eclipse.JAVAHOME.Gjun.src;

public class A9 {

	public static void main(String[] args) {
	   String s1=new String("Hello Java!");
	   System.out.println("s1.concat(LOVE)="+s1.concat("LOVE"));
	   System.out.println("s1.toLowerCase()="+s1.toLowerCase());
	   System.out.println("s1.length()="+s1.length());
	   
	   StringBuffer s2=new StringBuffer("Hello Java!");
	   System.out.println("s2.append(4)="+s2.append(4));
	   System.out.println("s2.toString()="+s2.toString());
	   System.out.println("s2.insert(0, 7)="+s2.insert(0, 7));
	   

	}

}
