// yon7608프로그래밍

import java.util.Scanner;


public class S2 {
   static int loc, flag;
   
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      String s = sc.next();
      char [] x = s.toCharArray();
      int ans = 0;
      for(int i=1; i<=s.length(); i++) {
         int q = i+1;
         if((s.length()-i)%q==0) {
            for(int j=1; j<=(s.length()-i)/q; j++) {
               loc = 0;
               flag = 0;
               for(int k=0; k<q; k++) {
                  int t = k-flag;
                  if(t<0) {
                     t=0;
                  }else if(t>=i) {
                     t = i-1;
                  }
                  if(x[t]==x[k+j*q-1]) {
                     loc++;
                  }else {
                     flag++;
                  }
                  if(flag>1) {
                     break;
                  }
               }
               if(flag>1) {
                  break;
               }
            }
            if(flag<=1 && loc>=i) {
               ans++;
            }
         }
      }
      System.out.println(ans);
   }
}
