<%@ page language="java" import="java.util.*" pageEncoding="BIG5"%>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
%>
<%! String os;
    String navigator;
    String area;
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
 %>
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
  <head>
    <base href="<%=basePath%>">
    
    <title>用戶傳送資訊</title>
    
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
      <fieldset style='width:60%'><legend>用戶傳送資訊</legend>
      <table align="center" width="200">
       <tr>
         <td>作業系統:</td>
         <td><%=os %></td>
       </tr>
      
       <tr>
         <td>瀏覽器:</td>
         <td><%=navigator %></td>
       </tr>
      
       <tr>
         <td>使用語系:</td>
         <td><%=area %></td>
       </tr>
    
      </table>
     </fieldset>
     </div>
     
     
     
     
     
  </body>
</html>
