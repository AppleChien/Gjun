<%@ page language="java" import="java.util.*" pageEncoding="BIG5" errorPage="login.jsp"%>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
   request.setCharacterEncoding("UTF-8");
   String username="";
   int visitTimes=0;
   
   Cookie[] cookies = request.getCookies();

   for(int i=0;cookies!=null&&i<cookies.length;i++){
     Cookie cookie=cookies[i]; 
     if("username".equals(cookie.getName())){
        username=cookie.getValue();
     }else if("visitTimes".equals(cookie.getName())){
        visitTimes=Integer.parseInt(cookie.getValue());    
     }
     }
     if(username==null||username.trim().equals("")){
       throw new Exception("您還未登入><請先進行登入");
   }
    Cookie visitTimesCookie=new Cookie("visitTimes",Integer.toString(++visitTimes));
    response.addCookie(visitTimesCookie);

%>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
  <head>
    <base href="<%=basePath%>">
    
    <title>cookie.jsp</title>
    <link rel='stylesheet' type='text/css' href='css/style.css'>

  </head>
  
  <body>
    <div align="center" style="margin:10px;">
     <fieldset style="width:70%">
        <legend>登入資料</legend>
         <form action="login.jsp" method="post">
          <table>
          <tr>
            <td>您的帳號:</td>
            <td><%=username %></td>
          </tr>
          <tr>
            <td>登入次數:</td>
            <td><%=visitTimes %></td>
          </tr>
          <tr>
            <td></td>
            <td>
             <input type="button" value="刷新" onclick="location'<%= request.getRequestURI() %> ?ts='+new Date().getTime();" class="button">
            
            </td>
          </tr>
    
         </table>
        </form>
     </fieldset>
    </div>
  </body>
</html>
