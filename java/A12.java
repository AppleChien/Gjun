package eclipse.JAVAHOME.Gjun.src;

import java.awt.Button;
import java.awt.Color;
import java.awt.Frame;
import java.awt.Label;

public class A12 {

	public static void main(String[] args) {
		Frame frm=new Frame();
		frm.setVisible(true);
		frm.setSize(350, 200);
		frm.setLocation(900, 350);
		frm.setTitle("巨匠");
		frm.setBackground(Color.BLUE);
		frm.setLayout(null);
		
		Label lb=new Label();
		lb.setText("新竹");
		lb.setBackground(Color.YELLOW);
		lb.setSize(240, 50);
		lb.setLocation(50, 50);
		Button btm1=new Button();
		btm1.setSize(50, 30);
		btm1.setLocation(50, 110);
		btm1.setLabel("紅色");
		Button btm2=new Button();
		btm2.setSize(50, 30);
		btm2.setLocation(110, 110);
		btm2.setLabel("綠色");
		Button btm3=new Button();
		btm3.setSize(50, 30);
		btm3.setLocation(170, 110);
		btm3.setLabel("黃色");
		Button btm4=new Button();
		btm4.setSize(50, 30);
		btm4.setLocation(230, 110);
		btm4.setLabel("離開");
		
       frm.add(btm1);
       frm.add(btm2);
       frm.add(btm3);
       frm.add(btm4);
       frm.add(lb);
	}

}
