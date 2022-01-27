<%@ page language="java" import="java.util.*" pageEncoding="BIG5"%>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
%>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
  <head>
    <base href="<%=basePath%>">
    
    <title>Return.jsp叫―把计</title>
    
	<meta http-equiv="pragma" content="no-cache">
	<meta http-equiv="cache-control" content="no-cache">
	<meta http-equiv="expires" content="0">    
	<meta http-equiv="keywords" content="keyword1,keyword2,keyword3">
	<meta http-equiv="description" content="This is my page">
	<!--
	<link rel="stylesheet" type="text/css" href="styles.css">
	-->
   <style>body{font-size:17px;line-height:26px;margin:20px;}</style>
  </head>
  
  <body>
    <a href="<%=request.getRequestURL() %>?param=return">盿Τ叫―把计return</a><br>
    <a href="<%=request.getRequestURL() %>">ゼ盿Τ叫―把计return</a><br>
    <%
      String param = request.getParameter("param");
    %> 
               и稱逗<br>
     
   <%   
     if("return".equals(param)){
      return;
    }
    %>
           и稱何谋
  </body>
</html>
