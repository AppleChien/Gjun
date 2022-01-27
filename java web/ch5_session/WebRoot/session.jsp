<%@page import="ch5_session.Person"%>
<%@ page language="java" import="java.util.*" pageEncoding="BIG5"%>
<%@ page import="java.text.DateFormat" %>
<%@ page import="java.text.SimpleDateFormat" %>
<%! DateFormat dateFormat = new SimpleDateFormat("yyyy-MM-dd"); %>
<%
String path = request.getContextPath();
String basePath = request.getScheme()+"://"+request.getServerName()+":"+request.getServerPort()+path+"/";
response.setCharacterEncoding("utf-8");
Person persons[]={
new Person("Wei-In Chen", "marlins54", 31, dateFormat.parse("1984-07-31")),
new Person("Chien-Min Wang", "royal67", 36, dateFormat.parse("1980-02-25")),
new Person("Marcus Stroman", "bluejays06", 23, dateFormat.parse("1991-09-12"))
};

String message="";
if(request.getMethod().equals("POST")){

for(Person person:persons){

  if(person.getName().equalsIgnoreCase(request.getParameter("username"))&&person.getPassword().equals(request.getParameter("password"))){
    session.setAttribute("person", person);
    session.setAttribute("loginTime", new Date());
  response.sendRedirect(request.getContextPath()+"/welcome.jsp");
  return;
  }

}
message="�ϥΪ̱b�K���~><�n�J����";

}

%>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
  <head>
    <base href="<%=basePath%>">
    
    <title>session.jsp</title>
    

  </head>
  
  <body>
     <div align="center" style="margin:10px;">
     <fieldset style="width:70%">
        <legend>�n�J</legend>
      <form action="session.jsp" method="post">
          <table>
          <%if(!message.equals(" ")){ %>
            <tr>
            <td></td>
            <td>
             <span></span>
             <span style="color:red;"><%=message %></span>
            </td>
           </tr>
           <%} %>
           <tr>
            <td>�b��:</td>
            <td>
             <input type="text" name="username" style="width:200px;">
            </td>
           </tr>
           <tr>
            <td>�K�X:</td>
            <td>
             <input type="password" name="password" style="width:200px;">
            </td>
           </tr>
           <tr>
            <td>�b��:</td>
            <td>
             <input type="submit" value="�n�J" class="button">
            </td>
           </tr>
    
    
    
         </table>
        </form>
     </fieldset>
    </div>
  </body>
</html>
