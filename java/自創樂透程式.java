package eclipse.JAVAHOME.Gjun.src;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
public class loto {
   InputStreamReader isr=new InputStreamReader(System.in);
   BufferedReader br=new BufferedReader(isr);
   int A[]=new int[6];
   int num;
   public loto(int n){
   num=n;
   }
    public int userInput() throws IOException{
    System.out.print("[�ֳz�C��]\n1.�ۿ�B2.�H��: ");
    String s=br.readLine();
    int usr=Integer.parseInt(s);
    return usr;
}
    public void platform(int usr) throws IOException{
      switch(usr){
       case 1:
         selfLoto();
        break;
       case 2:
         randomLoto();
        break;
       default:
         System.out.println("�L"+usr+"�ﶵ!");
}
}
    public void randomLoto() throws IOException{
        System.out.print("�п�J�H���ռ�: ");
        String s1=br.readLine();
        int n=Integer.parseInt(s1);
       for(int i=1;i<=n;i++){
        System.out.print("��"+i+"��: ");
        A[0]=(int)(Math.random()*num+1);
        do{
           A[1]=(int)(Math.random()*num+1);
          }while(A[1]==A[0]);
        do{
           A[2]=(int)(Math.random()*num+1);
          }while(A[2]==A[1] || A[2]==A[0]);
        do{
           A[3]=(int)(Math.random()*num+1);
          }while(A[3]==A[2] || A[3]==A[1] || A[3]==A[0]);
        do{
           A[4]=(int)(Math.random()*num+1);
          }while(A[4]==A[3] || A[4]==A[2] || A[4]==A[1] || A[4]==A[0]);
        do{
           A[5]=(int)(Math.random()*num+1);
          }while(A[5]==A[4] || A[5]==A[3] || A[5]==A[2] || A[5]==A[1] || A[5]==A[0]);
         for(int j=0;j<A.length;j++){
           System.out.print(A[j]+" ");
           }
             System.out.println("");
             Arrays.sort(A);
             System.out.print("�Ƨǫ�: ");
               for(int j=0;j<A.length;j++){
                  System.out.print(A[j]+" ");
               }
                   System.out.println();
               }
              }
    public void selfLoto() throws IOException{
        for(int i=0;i<A.length;i++){
            System.out.print("�п�J��"+(i+1)+"�Ӹ��X: ");
            String s=br.readLine();
            A[i]=Integer.parseInt(s);
           }
           for(int i=0;i<A.length;i++){
            System.out.print(A[i]+"\t");
        }
      }
}