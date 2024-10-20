// yon7608프로그래밍

import java.util.Scanner;

public class B1 {
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      for(int i=0; i<(n+1)/2; i++) {
         if(i==n/2 && n%2==1) {
            for(int j=0; j<i; j++) {
               System.out.print(".");
            }
            System.out.print("X");
            for(int j=0; j<i; j++) {
               System.out.print(".");
            }
            System.out.println();
         }else {
            for(int j=0; j<i; j++) {
               System.out.print(".");
            }
            System.out.print("X");
            for(int j=i+1; j<n-i-1; j++) {
               System.out.print(".");
            }
            System.out.print("X");
            for(int j=n-i-1; j<n-1; j++) {
               System.out.print(".");
            }
            System.out.println();
         }
      }
      for(int k=0; k<n/2; k++) {
         for(int j=n/2; j>k+1; j--) {
            System.out.print(".");
         }
         System.out.print("X");
         if(n%2==0) {
            for(int j=0; j<2*k; j++) {
               System.out.print(".");
            }
         }else {
            for(int j=0; j<=2*k; j++) {
               System.out.print(".");
            }
         }
         
         System.out.print("X");
         for(int j=n/2; j>k+1; j--) {
            System.out.print(".");
         }
         System.out.println();
      }
   }

}