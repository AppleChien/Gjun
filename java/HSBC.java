
public abstract class HSBC {
   double 存款利率=0.01;
   double 借款利率=0.01;
   void 利率表(double m,double n){
	   存款利率=m;
	   借款利率=n;
	   System.out.println("HSBC利率表,存款利率="+存款利率+"借款利率="+借款利率);
   }
   abstract void 房貸計算(int m,double n);
   abstract void 車貸計算(int m,double n);
   abstract void 信貸計算(int m,double n);
}
