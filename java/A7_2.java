package eclipse.JAVAHOME.Gjun.src;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
public class A7_2 {

public static void main(String args[])throws IOException
{
    InputStreamReader isr=new InputStreamReader(System.in);
    BufferedReader br=new BufferedReader(isr);
   System.out.print("請輸入隨機組數: ");
   String s1=br.readLine();
   int n=Integer.parseInt(s1);
   int A[]=new int[6];
   for(int i=1;i<=n;i++){
      System.out.print("第"+i+"組: ");
     A[0]=(int)(Math.random()*49+1);
     do{
        A[1]=(int)(Math.random()*49+1);
      }while(A[1]==A[0]);
     do{
        A[2]=(int)(Math.random()*49+1);
       }while(A[2]==A[1] || A[2]==A[0]);
     do{
        A[3]=(int)(Math.random()*49+1);
       }while(A[3]==A[2] || A[3]==A[1] || A[3]==A[0]);
     do{
        A[4]=(int)(Math.random()*49+1);
       }while(A[4]==A[3] || A[4]==A[2] || A[4]==A[1] || A[4]==A[0]);
    do{
        A[5]=(int)(Math.random()*49+1);
      }while(A[5]==A[4] || A[5]==A[3] || A[5]==A[2] || A[5]==A[1] || A[5]==A[0]);
    for(int j=0;j<A.length;j++){
        System.out.print(A[j]+" ");
      }
        System.out.println("");
        Arrays.sort(A);
        System.out.print("排序後: ");
        for(int j=0;j<A.length;j++){
           System.out.print(A[j]+" ");
          }
           System.out.println();
        }
    }

}
