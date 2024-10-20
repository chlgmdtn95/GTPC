// yon7608프로그래밍

import java.util.Scanner;

public class C1 {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int a = sc.nextInt();
      int b = sc.nextInt();
      int x = sc.nextInt();
      int y = sc.nextInt();
      long c = sc.nextLong();
      long d = sc.nextLong();
      long ans = 0;
      if(c>0 && d>0) {
         if(c>d) {
            ans+=y*(2*b-c-d);
         }else {
            ans+=y*(d-c);
         }
      }else if(c<0 && d>0) {
         ans+=c*x;
         ans+=y*(d-1);
      }else if (c>0 && d<0) {
         ans+=x*Math.abs(d);
         ans += y*(b-c);
         ans+=(b-1)*y;
      }else {
         if(c<d) {
            ans+=x*(d-c);
         }else {
            ans+=y*2*(b-1);
            ans+=x*Math.abs((d+c));
         }
      }
      System.out.println(ans);
      }
   }
