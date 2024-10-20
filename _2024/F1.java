// yon7608프로그래밍

import java.util.Scanner;

public class F1 {

   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      int[] a = new int[n];
      int[] memo = new int[n];
      for(int i=0; i<n; i++) {
         a[i] = sc.nextInt();
      }
      memo[n-1] = 1;
      int max = 0;
      for(int i=n-2; i>=0; i--) {
         for(int j=1; j<n-i; j++) {
            if(a[i]<a[i+j] && memo[i+j]>max) {
               max = memo[i+j];
            }
         }
         memo[i] = max+1;
         max = 0;
      }
      for(int i=0; i<n; i++) {
         if(memo[i]>max) {
            max = memo[i];
         }
      }
      System.out.println(max);
   }
}
