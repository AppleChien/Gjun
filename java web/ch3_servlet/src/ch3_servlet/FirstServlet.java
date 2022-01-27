package ch3_servlet;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class FirstServlet extends HttpServlet {

	public FirstServlet() {
		super();
	}

	
	public void destroy() {
		super.destroy(); // Just puts "destroy" string in log
		// Put your code here
	}

	/*
		 */
	public void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
      this.log("呼叫doGet()方法");
      this.execute(request,response);

	}
	public void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
	  this.log("呼叫doGet()方法");
	  this.execute(request,response);
		
	}

	
	private void execute(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("UTF-8");
		response.setCharacterEncoding("UTF-8");
		String requestURI=request.getRequestURI();
		String method=request.getMethod();
		String param=request.getParameter("param");
		
		response.setContentType("text/html");
		PrintWriter out = response.getWriter();
		out.println("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\">");
		out.println("<HTML>");
		out.println("  <HEAD><TITLE>A Servlet</TITLE></HEAD>");
		out.println("  <BODY>");
		out.println("以"+method+"方法存取該頁面,所取得的參數為:"+param+"<br>");
		out.println("<form action='"+requestURI+"' method='get'>");
		out.println("<input type='text' name='param' value='string 1'>");
		out.println("<input type='submit'  value='Get請求'+'<br>'");
		out.println("</form>");
		out.println("<form action='"+requestURI+"' method='post'>");
		out.println("<input type='text' name='param' value='string 2'>");
		out.println("<input type='submit'  value='Post請求'+'<br>'");
		out.println("</form>");
		
		out.println("<script>document.write('本頁面最後更新時間為:'+document.lastModified+'<br>');</script>");
		out.println("<script>document.write('本頁面URL:'+location+'<br>');</script>");
		
		out.println("  </BODY>");
		out.println("</HTML>");
		out.flush();
		out.close();
		
	}


	@Override
	protected long getLastModified(HttpServletRequest req) {
		this.log("呼叫getLastModified()方法");
		return -1;
	}


	public void init() throws ServletException {
		// Put your code here
	}

}
