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
                     【登 鸛 鵲 樓】-王 之 渙<br/>
		白 日 依 山 盡<br/>
		黃 河 入 海 流<br/>
		欲 窮 千 里 目<br/>
		更 上 一 層 樓<br/>
    <%
      }else if("2".equals(param)){
     %>
	          【相 思】-王 維<br/>
		紅 豆 生 南 國 <br/>
		春 來 發 幾 枝<br/>
		願 君 多 采 擷<br/>
		此 物 最 相 思<br/>
    <% 
     }else if("3".equals(param)){
    %>
       
	          【八 陣 圖】-杜 甫<br/>
		功 蓋 三 分 國<br/>
		名 成 八 陣 圖<br/>
		江 流 石 不 轉<br/>
		遺 恨 失 吞 吳
	<%
	 }else{
	 %>	
     <fieldset style='60%'><legend>請選擇唐詩:</legend>
      <a href="If.jsp?param=1">【登 鸛 鵲 樓】-王 之 渙<br></a>
      <a href="If.jsp?param=2">【相 思】-王 維<br></a>
      <a href="If.jsp?param=3">【八 陣 圖】-杜 甫<br></a>
      
    <%
    }
     %>
    
    
    </fieldset>
  </body>
</html>
