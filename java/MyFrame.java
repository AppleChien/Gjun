package eclipse.JAVAHOME.Gjun.src;

import java.awt.Button;
import java.awt.Color;
import java.awt.Frame;
import java.awt.Label;

public class MyFrame extends Frame {
	    Label lb=new Label();
	    Button btm1=new Button();
	    Button btm2=new Button();
	    Button btm3=new Button();
	    Button btm4=new Button();
	    
	public MyFrame(int w,int h,int x,int y,String title){
	    setVisible(true);
	    setSize(w,h);
	    super.setLocation(x, y);
	    setBackground(Color.ORANGE);
	    setTitle(title);
	    setLayout(null);
		
		lb.setText("新竹");
		lb.setBackground(Color.YELLOW);
		lb.setSize(240, 50);
		lb.setLocation(50, 50);
		
		btm1.setSize(50, 30);
		btm1.setLocation(50, 110);
		btm1.setLabel("紅色");
		
		btm2.setSize(50, 30);
		btm2.setLocation(110, 110);
		btm2.setLabel("綠色");
		
		btm3.setSize(50, 30);
		btm3.setLocation(170, 110);
		btm3.setLabel("黃色");
		
		btm4.setSize(50, 30);
		btm4.setLocation(230, 110);
		btm4.setLabel("離開");
		
       add(btm1);
       add(btm2);
       add(btm3);
       add(btm4);
       add(lb);
	}
	public void getBtnName(){
		lb.setText("按鈕:"+btm1.getLabel()+btm2.getLabel()+btm3.getLabel()+btm4.getLabel());
	}
}
