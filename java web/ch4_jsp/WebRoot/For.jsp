<%@page import="javax.swing.RowFilter"%>
<%@ page language="java" import="java.util.*" pageEncoding="BIG5"%>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
%>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
  <head>
    <base href="<%=basePath%>">
    
    <title>For-Loop ��ƶǰe</title>
    
	<meta http-equiv="pragma" content="no-cache">
	<meta http-equiv="cache-control" content="no-cache">
	<meta http-equiv="expires" content="0">    
	<meta http-equiv="keywords" content="keyword1,keyword2,keyword3">
	<meta http-equiv="description" content="This is my page">
	<!--
	<link rel="stylesheet" type="text/css" href="styles.css">
	-->
     <style align="center"></style>
  </head>
  
  <body>
    <br>
   <%
       Object mail [][] = {

          {"�z���U����T�w���ҳq�L", "servlet@yahoo.com.tw", "pcschool_HS@gmail.com", "2015-12-18"},
          {"�z�w���\���o���B���ɸ��", "baseball@cpbl.com.tw", "pcschool_CL@gmail.com", "2015-12-26"},
          {"�z�ҥӽЪ��U�ڤw�֭�", "rent@hotmail.com", "pcschool_TN@gmail.com", "2015-12-31"},
          {"�кɳt�ӳ��ӤH�ұo�|", "tax@hccg.gov.tw", "pcschool_ML@gmail.com", "2016-01-05"}
        };
      String bgcolors[]={"#EEEEEE","#999999"};
      String textcolors[]={"#337788","#FFFFFF"};
   
    %>
       <table border="1" cellspacing="1" cellpadding="10" width="750" align="center">
       <tr>
         <td align="center" style="line-height:22px;">�D��&nbsp;</td>
         <td align="center" style="line-height:22px;">�H��H&nbsp;</td>
         <td align="center" style="line-height:22px;">����H&nbsp;</td>
         <td align="center" style="line-height:22px;">������&nbsp;</td>
       
       </tr>
    <%
       for(int i=0;i<mail.length;i++){
        Object roll[] = mail[i];
     %>   
       <tr style="background:<%=bgcolors[i%2] %>;color:<%=textcolors[i%2]%>;">
           <td><%=roll [0]%></td>
           <td align="center"><%=roll [1]%></td>
           <td align="center"><%=roll [2]%></td>
           <td align="center"><%=roll [3]%></td>
       
       </tr>
       <%
       }
        %>
       </table>
    
  </body>
</html>
