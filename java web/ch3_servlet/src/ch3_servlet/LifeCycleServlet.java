package ch3_servlet;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletConfig;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class LifeCycleServlet extends HttpServlet {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
    
	private static double baselevel=0.0;
		
	
	
	
	public LifeCycleServlet() {
		super();
	}

	/**
	 * Initialization of the servlet. <br>
	 *
	 * @throws ServletException if an error occurs
	 */
   public void init() throws ServletException {
	   this.log("����init��k()...");
	   ServletConfig conf= this.getServletConfig();
	   baselevel=Double.parseDouble( conf.getInitParameter("baselevel"));
}

	@Override
	protected void service(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		this.log("����service()��k...");
		super.service(request, response);
	}

	/**
		 * The doGet method of the servlet. <br>
		 
		 */
	public void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {

		
		this.log("����doGet()��k...");
		response.setCharacterEncoding("UTF-8");
		
		response.setContentType("text/html");
		PrintWriter out = response.getWriter();
		out.println("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\">");
		out.println("<HTML>");
		out.println("  <HEAD><TITLE>�ӤH�ұo�|�p��</TITLE></HEAD>");
		out.println("<link rel='stylesheet' type='text/css' href='../css/style.css'>");
		out.println("  <BODY>");
		
		out.println("<div align='center'><br>");
		out.println("<fieldset style='width:75%'><legend>�ӤH�ұo�|�p���</legend>");
		out.println("<form action='LifeCycleServlet' method='post'>");
		
		out.println("<div style='line'>");
		out.println("<div class='leftDiv'>�z���~����:</div>");
		out.println("<div align='left' class='rightDiv'><input type='text' name='income'>���:��</div>");
		out.println("</div><br>");
		
		out.println("<div style='line'>");
		out.println("<div class='leftDiv'></div>");
		out.println("<div align='left' class='rightDiv'><input type='submit' value='�p��ӤH�ұo�| ' class='button'></div>");
		out.println("</div>");

		out.println("</form>");
		out.println("</fieldset>");
		
	    out.println("</div>");
		out.println("  </BODY>");
		out.println("</HTML>");
		out.flush();
		out.close();
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

		this.log("����doPost()��k...");
		response.setCharacterEncoding("UTF-8");
		
		
		response.setContentType("text/html");
		PrintWriter out = response.getWriter();
		out.println("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\">");
		out.println("<HTML>");
		out.println("  <HEAD><TITLE>�ӤH�ұo�|�p��</TITLE></HEAD>");
		out.println("<link rel='stylesheet' type='text/css' href='../css/style.css'>");
		out.println("  <BODY>");
		out.println("<div align='center'><br>");
		out.println("<fieldset style='width:75%'><legend>�ӤH�ұo�|�p���</legend><br>");
		
		try {
			double income = new Double(request.getParameter("income"));
			double charge =income-baselevel;
			double tax=0;
			
			if (charge<=0) {tax=0;}
			if (charge<=520000 && charge>0) {tax=charge*0.05;}
			if (charge<=1170000 && charge>520000) {tax=charge*0.12-36400;}
			if (charge<=2350000 && charge>1170000) {tax=charge*0.2-130000;}
			if (charge<=4400000 && charge>2350000) {tax=charge*0.3-365000;}
			if (charge<=10000000 && charge>4400000) {tax=charge*0.4-805000;}
			if (charge>10000000) {tax=charge*0.45-1305000;}
			
			out.println("<div style='line'>");
			out.println("<div class='leftdiv'>�z���~����:</div>");
			out.println("<div class='rightdiv'>"+income+"</div>");
			out.println("</div>");
			
			out.println("<div style='line'>");
			out.println("<div class='leftdiv'>�z���ǵ|:</div>");
			out.println("<div class='rightdiv'>"+tax+"��</div>");
			out.println("</div><br>");
			
			out.println("<input type='button' onclick='history.go(-1);' value='ú�|�O������q�� ��^' class='button'>");
			out.println("</fieldset></div>");	
			
			
			
			
		} catch (Exception e) {
			// TODO: handle exception
			out.println("�п�J�ƭȸ�ơC<input type='button' onclick='history.go(-1);' value='��^' class='button'>");
		}
		
		
		
		out.println("  </BODY>");
		out.println("</HTML>");
		out.flush();
		out.close();
	}


	/**
	 * Destruction of the servlet. <br>
	 */
   public void destroy() {
	super.destroy(); // Just puts "destroy" string in log
	// Put your code here
	this.log("����destroy()��k...");
	baselevel=0;
}
}
