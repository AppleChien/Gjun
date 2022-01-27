<%@ page language="java" import="java.util.*" pageEncoding="BIG5"%>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
Locale locale = request.getLocale();
Calendar calendar = Calendar.getInstance(locale);
int hour = calendar.get(calendar.HOUR_OF_DAY);
String msg="";
if(hour<=6){msg="凌晨好~還可以繼續睡";}
if(hour<=9){msg="早上好~美味的早餐迎接著我好開心~";}
if(hour<=12){msg="中午好~已經開始想午餐便當了肚子好餓...";}
if(hour<=18){msg="下午好~突然覺得昏昏欲睡...睡飽起來又要準備吃晚餐了~";}
if(hour<=24){msg="晚上好~準備吃宵夜囉~~~";}


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
         <td> 現在時刻為<%=hour%>時 </td>
       </tr>
       <tr>
         <td><%=msg%></td>
       </tr>
    </table>
  </body>
</html>
