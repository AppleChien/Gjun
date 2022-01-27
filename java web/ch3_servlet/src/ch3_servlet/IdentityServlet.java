package ch3_servlet;

import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics2D;
import java.awt.image.BufferedImage;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Random;

import javax.enterprise.inject.New;
import javax.imageio.ImageIO;
import javax.servlet.ServletException;
import javax.servlet.ServletOutputStream;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class IdentityServlet extends HttpServlet {

	/**
		 * Constructor of the object.
		 */
	public IdentityServlet() {
		super();
	}

	/**
		 * Destruction of the servlet. <br>
		 */
	public void destroy() {
		super.destroy(); // Just puts "destroy" string in log
		// Put your code here
	}

	public static final char[]CHARS={'2','3','4','5','6','7','8','9','A','B','C',
			'D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R',
			'S','T','U','V','W','X','Y','Z'
			};
	
	public static Random random=new Random();
	public static String getRandomString() {
		StringBuffer buffer=new StringBuffer();
		for(int i=0;i<6;i++){
			buffer.append(CHARS[random.nextInt(CHARS .length)]);
		}
		return buffer.toString();
		
	}
	
	public static Color getRandomColor() {
		return new Color(random.nextInt(255),random.nextInt(255),random.nextInt(255));
	} 
		
	public static Color getReverseColor(Color c) {
		return new Color(255-c.getRed(),255-c.getGreen(),255-c.getBlue());
	}
	
	
	public void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {

		response.setContentType("image/jpeg");
		String randomString=getRandomString();
		request.getSession(true).setAttribute("answer", randomString);
		int width=125;
		int height=40;
		Color color=getRandomColor();
		Color reverse=getReverseColor(color);
		BufferedImage bi =new BufferedImage(width, height, BufferedImage.TYPE_INT_RGB);
		Graphics2D g=bi.createGraphics();
		g.setFont(new Font(Font.SANS_SERIF, Font.BOLD, 22));
		g.setColor(color);
		g.fillRect(0, 0, width, height);
		g.setColor(reverse);
		g.drawString(randomString, 20, 28);
		
		for(int i=0;i<random.nextInt(100);i++){
			g.drawRect(random.nextInt(width), random.nextInt(height), 1, 1);
		}
		
		ServletOutputStream out =response.getOutputStream();
		ImageIO.write(bi,"JPEG",out); 
		out.flush();
	}

	/**
		 * The doPost method of the servlet. <br>
		 *
		 * This method is called when a form has its tag value method equals to post.
		 * 
		 * @param request the request send by the client to the server
		 * @param response the response send by the server to the client
		 * @throws ServletException if an error occurred
		 * @throws IOException if an error occurred
		 */
	public void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {

		response.setContentType("text/html");
		PrintWriter out = response.getWriter();
		out.println("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\">");
		out.println("<HTML>");
		out.println("  <HEAD><TITLE>A Servlet</TITLE></HEAD>");
		out.println("  <BODY>");
		out.print("    This is ");
		out.print(this.getClass());
		out.println(", using the POST method");
		out.println("  </BODY>");
		out.println("</HTML>");
		out.flush();
		out.close();
	}

	/**
		 * Initialization of the servlet. <br>
		 *
		 * @throws ServletException if an error occurs
		 */
	public void init() throws ServletException {
		// Put your code here
	}

}
