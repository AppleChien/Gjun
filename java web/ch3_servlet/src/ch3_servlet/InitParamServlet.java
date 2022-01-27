package ch3_servlet;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.Enumeration;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class InitParamServlet extends HttpServlet {

	/**
		 * Constructor of the object.
		 */
	public InitParamServlet() {
		super();
	}

	/**
		 * Destruction of the servlet. <br>
		 */
	public void destroy() {
		super.destroy(); // Just puts "destroy" string in log
		// Put your code here
	}

	/**
		 * The doGet method of the servlet. <br>
		 *
		 * This method is called when a form has its tag value method equals to get.
		 * 
		 * @param request the request send by the client to the server
		 * @param response the response send by the server to the client
		 * @throws ServletException if an error occurred
		 * @throws IOException if an error occurred
		 */
	public void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        request.setCharacterEncoding("utf-8");
        response.setCharacterEncoding("utf-8");
		
		response.setContentType("text/html");
		PrintWriter out = response.getWriter();
		out.println("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\">");
		out.println("<HTML>");
		out.println("  <HEAD><TITLE>登入以檢視notice檔案</TITLE></HEAD>");
		out.println(" <style> body,td,div{font-size:14px;line-height:32px;}</style>  ");
		
		out.println("  <BODY>");
		out.println(" <form action='"+request.getRequestURI()+"' method='post'>  ");
		out.println(" 帳號:<input type='text' name='username' style='width:200px;' ><br>");
		out.println(" 密碼:<input type='password' name='password' style='width:200px;'><br>");
		out.println(" <input type='submit' value='登入' >");
		
		
		out.println("</form>   ");
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
		
		
		String username =request.getParameter("username");
		String password =request.getParameter("password");
		Enumeration params =this.getInitParameterNames();
		while (params.hasMoreElements()) {
			String usernameParam = (String) params.nextElement();
			String passwordParam=this.getInitParameter(usernameParam);
			if (usernameParam.equalsIgnoreCase(username)&&passwordParam.equals(password)) {
				request.getRequestDispatcher("/WEB-INF/notice.html").forward(request, response);
			}
			
			
		}
		
		this.doGet(request, response);
		
		
		
		
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
