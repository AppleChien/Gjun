<%@ page language="java" import="java.util.*" pageEncoding="BIG5"%>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
Locale locale = request.getLocale();
Calendar calendar = Calendar.getInstance(locale);
int hour = calendar.get(calendar.HOUR_OF_DAY);
String msg="";
if(hour<=6){msg="���n~�٥i�H�~���";}
if(hour<=9){msg="���W�n~���������\�ﱵ�ۧڦn�}��~";}
if(hour<=12){msg="���Ȧn~�w�g�}�l�Q���\�K��F�{�l�n�j...";}
if(hour<=18){msg="�U�Ȧn~��Mı�o��������...�ι��_�ӤS�n�ǳƦY���\�F~";}
if(hour<=24){msg="�ߤW�n~�ǳƦY�d�]�o~~~";}


%>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
  <head>
    <base href="<%=basePath%>">
    
    <title>Greetings.jsp</title>
    
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
    <table>
       <tr>
         <td> �{�b�ɨ謰<%=hour%>�� </td>
       </tr>
       <tr>
         <td><%=msg%></td>
       </tr>
    </table>
  </body>
</html>
