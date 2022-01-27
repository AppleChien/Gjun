package ch3_servlet;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.Locale;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class bbb extends HttpServlet {

	/**
		 * Constructor of the object.
		 */
	public bbb() {
		super();
	}

	/**
		 * Destruction of the servlet. <br>
		 */
	public void destroy() {
		super.destroy(); // Just puts "destroy" string in log
		// Put your code here
	}

	private String getOS ( String userAgent) {
		if(userAgent.indexOf("NT 6.1")>0)return "Windows 7作業系統";
		if(userAgent.indexOf("NT 6.2")>0)return "Windows 8作業系統";
		if(userAgent.indexOf("NT 6.3")>0)return "Windows 8.1作業系統";
		if(userAgent.indexOf("NT 10.0")>0)return "Windows 10作業系統";
	    
		return "未知作業系統";
	}
	
	private String getNavigator ( String userAgent) {
		if(userAgent.indexOf("Chrome")>0)return "Chrome瀏覽器";
		if(userAgent.indexOf("Firefox")>0)return "Firefox瀏覽器";
		if(userAgent.indexOf("MSIE")>0)return "IE瀏覽器";
	    return "未知瀏覽器";
	}
	private String getLocale(Locale locale) {
		if(Locale.SIMPLIFIED_CHINESE.equals(locale))return"簡體中文";
		if(Locale.TRADITIONAL_CHINESE.equals(locale))return"繁體中文";
		if(Locale.FRANCE.equals(locale))return"法文";
		if(Locale.ENGLISH.equals(locale))return"簡體中文";
		return "未知語言";
	}

	public void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.setCharacterEncoding("UTF-8");
		response.setCharacterEncoding("UTF-8");
		
	    String userAgent=request.getHeader("user-agent");
	    Locale locale=request.getLocale();
		response.setContentType("text/html");
		PrintWriter out = response.getWriter();
		out.println("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\">");
		out.println("<HTML>");
		out.println("  <HEAD><TITLE>A Servlet</TITLE></HEAD>");
		out.println("<style> body {font-size:14px;line-height:26px;} </style>");
		out.println("<style> b {color:BLUE;} </style>");
		out.println("  <BODY>");
		out.println("<b>您的IP為:</b>"+request.getRemoteAddr()+"<br>");
	    out.println("<b>您使用:</b>"+getOS(userAgent)+"<br>");
	    out.println("<b>您使用:</b>"+getNavigator(userAgent)+"<br>");
	    out.println("<b>您使用:</b>"+getLocale(locale)+"<br>");
	    out.println("<b>伺服器IP:</b>"+request.getLocalAddr()+"<br>");
	    out.println("<b>伺服器使用通訊埠:</b>"+request.getServerPort()+"<br>");
	    out.println("<b>伺服器軟體:</b>"+this.getServletContext()+"<br>");
	    out.println("<b>伺服器名稱:</b>"+request.getLocalName()+"<br>");
	    out.println("<b>使用的協定:</b>"+request.getProtocol()+"<br>");
	    out.println("<b>您存取的URI:</b>"+request.getRequestURI()+"<br>");
	    out.println("<b>該Servlet路徑::</b>"+request.getServletPath()+"<br>");
	    out.println("<b>該Servlet路徑名稱:</b>"+this.getClass().getName()+"<br>");
	    out.println("<b>本應用程式在硬碟的目錄:</b>"+this.getServletContext().getRealPath("")+"<br>");
	    out.println("<b>網路相對路徑:</b>"+request.getContextPath()+"<br>");
	   
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
