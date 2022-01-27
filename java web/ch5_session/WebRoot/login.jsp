<%@ page language="java" import="java.util.*" pageEncoding="BIG5" isErrorPage="true"%>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
   request.setCharacterEncoding("UTF-8");
   response.setCharacterEncoding("UTF-8");
   
   if("POST".equals(request.getMethod())){
     Cookie usernameCookie=new Cookie("username",request.getParameter("username"));
     Cookie visittimesCookie=new Cookie("visitTimes","0");
     
     response.addCookie(usernameCookie);
     response.addCookie(visittimesCookie);
     
     response.sendRedirect(request.getContextPath()+"/cookie.jsp");
     return;
   }


%>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
  <head>
    <base href="<%=basePath%>">
    
    <title>My JSP 'login.jsp' starting page</title>
    
	

  </head>
  
  <body>
   <div align="center" style="margin:10px;">
     <fieldset style="width:70%">
        <legend>登入資料</legend>
         <form action="login.jsp" method="post">
          <table>
           <tr>
            <td></td>
            <td>
             <span></span>
             <span style="color:red;"><%=exception.getMessage() %></span>
            </td>
           </tr>
           <tr>
            <td>帳號:</td>
            <td>
             <input type="text" name="username" style="width:200px;">
            </td>
           </tr>
           <tr>
            <td>密碼:</td>
            <td>
             <input type="password" name="password" style="width:200px;">
            </td>
           </tr>
           <tr>
            <td>帳號:</td>
            <td>
             <input type="submit" value="登入" class="button">
            </td>
           </tr>
   
   
   
          </table>
        </form>
     </fieldset>
    </div>
  </body>
</html>
