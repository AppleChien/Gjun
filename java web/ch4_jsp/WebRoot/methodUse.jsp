<%@ page language="java" import="java.util.*" pageEncoding="BIG5"%>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
%>
<%! String os;
    String navigator;
    String area;
private String getOS ( String userAgent) {
		if(userAgent.indexOf("NT 6.1")>0)return "Windows 7�@�~�t��";
		if(userAgent.indexOf("NT 6.2")>0)return "Windows 8�@�~�t��";
		if(userAgent.indexOf("NT 6.3")>0)return "Windows 8.1�@�~�t��";
		if(userAgent.indexOf("NT 10.0")>0)return "Windows 10�@�~�t��";
	    
		return "�����@�~�t��";
	}
	
	private String getNavigator ( String userAgent) {
		if(userAgent.indexOf("Chrome")>0)return "Chrome�s����";
		if(userAgent.indexOf("Firefox")>0)return "Firefox�s����";
		if(userAgent.indexOf("MSIE")>0)return "IE�s����";
	    return "�����s����";
	}
	private String getLocale(Locale locale) {
		if(Locale.SIMPLIFIED_CHINESE.equals(locale))return"²�餤��";
		if(Locale.TRADITIONAL_CHINESE.equals(locale))return"�c�餤��";
		if(Locale.FRANCE.equals(locale))return"�k��";
		if(Locale.ENGLISH.equals(locale))return"²�餤��";
		return "�����y��";
	}
 %>
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
  <head>
    <base href="<%=basePath%>">
    
    <title>�Τ�ǰe��T</title>
    
	<meta http-equiv="pragma" content="no-cache">
	<meta http-equiv="cache-control" content="no-cache">
	<meta http-equiv="expires" content="0">    
	<meta http-equiv="keywords" content="keyword1,keyword2,keyword3">
	<meta http-equiv="description" content="This is my page">
	<!--
	<link rel="stylesheet" type="text/css" href="styles.css">
	-->
    <style type="text/css">body,input,td,div{font-size:14px;line-height:26px;}</style>
  </head>
  
  <body>
    <%   String userAgent = request.getHeader("user-agent");
         Locale userlocale = request.getLocale();
         os = getOS(userAgent);
         navigator = getNavigator(userAgent);
         area = getLocale(userlocale);
     %>
     <br>
     <div align="center" class='LeftDiv'>
      <fieldset style='width:60%'><legend>�Τ�ǰe��T</legend>
      <table align="center" width="200">
       <tr>
         <td>�@�~�t��:</td>
         <td><%=os %></td>
       </tr>
      
       <tr>
         <td>�s����:</td>
         <td><%=navigator %></td>
       </tr>
      
       <tr>
         <td>�ϥλy�t:</td>
         <td><%=area %></td>
       </tr>
    
      </table>
     </fieldset>
     </div>
     
     
     
     
     
  </body>
</html>
