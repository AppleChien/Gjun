<%@ page language="java" import="java.util.*" pageEncoding="BIG5"%>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
%>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
  <head>
    <base href="<%=basePath%>">
    
    <title>My JSP 'If.jsp' starting page</title>
    
	<meta http-equiv="pragma" content="no-cache">
	<meta http-equiv="cache-control" content="no-cache">
	<meta http-equiv="expires" content="0">    
	<meta http-equiv="keywords" content="keyword1,keyword2,keyword3">
	<meta http-equiv="description" content="This is my page">
	<!--
	<link rel="stylesheet" type="text/css" href="styles.css">
	-->

  </head>
  
  <body>
    <%
      String param = request.getParameter("param");
      if("1".equals(param)){
     %>
                     �i�n �| �N �ӡj-�� �� �A<br/>
		�� �� �� �s ��<br/>
		�� �e �J �� �y<br/>
		�� �a �d �� ��<br/>
		�� �W �@ �h ��<br/>
    <%
      }else if("2".equals(param)){
     %>
	          �i�� ��j-�� ��<br/>
		�� �� �� �n �� <br/>
		�K �� �o �X �K<br/>
		�@ �g �h �� �^<br/>
		�� �� �� �� ��<br/>
    <% 
     }else if("3".equals(param)){
    %>
       
	          �i�K �} �ϡj-�� �j<br/>
		�\ �\ �T �� ��<br/>
		�W �� �K �} ��<br/>
		�� �y �� �� ��<br/>
		�� �� �� �] �d
	<%
	 }else{
	 %>	
     <fieldset style='60%'><legend>�п�ܭ��:</legend>
      <a href="If.jsp?param=1">�i�n �| �N �ӡj-�� �� �A<br></a>
      <a href="If.jsp?param=2">�i�� ��j-�� ��<br></a>
      <a href="If.jsp?param=3">�i�K �} �ϡj-�� �j<br></a>
      
    <%
    }
     %>
    
    
    </fieldset>
  </body>
</html>
