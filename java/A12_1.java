package eclipse.JAVAHOME.Gjun.src;

import java.awt.Button;

public class A12_1 {

	public static void main(String[] args){
		MyFrame frm=new MyFrame(300,200,950,450,"新版容器元件");
		//frm.getBtnName();
		Button btn5=new Button();
		btn5.setSize(200,30);
		btn5.setLocation(50, 150);
		frm.add(btn5);

	}

}
