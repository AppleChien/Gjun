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
    
    <title>For-Loop 資料傳送</title>
    
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

          {"您註冊的資訊已驗證通過", "servlet@yahoo.com.tw", "pcschool_HS@gmail.com", "2015-12-18"},
          {"您已成功取得奧運參賽資格", "baseball@cpbl.com.tw", "pcschool_CL@gmail.com", "2015-12-26"},
          {"您所申請的貸款已核准", "rent@hotmail.com", "pcschool_TN@gmail.com", "2015-12-31"},
          {"請盡速申報個人所得稅", "tax@hccg.gov.tw", "pcschool_ML@gmail.com", "2016-01-05"}
        };
      String bgcolors[]={"#EEEEEE","#999999"};
      String textcolors[]={"#337788","#FFFFFF"};
   
    %>
       <table border="1" cellspacing="1" cellpadding="10" width="750" align="center">
       <tr>
         <td align="center" style="line-height:22px;">主旨&nbsp;</td>
         <td align="center" style="line-height:22px;">寄件人&nbsp;</td>
         <td align="center" style="line-height:22px;">收件人&nbsp;</td>
         <td align="center" style="line-height:22px;">收件日期&nbsp;</td>
       
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
