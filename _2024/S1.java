// yon7608프로그래밍

import java.util.Scanner;

public class S1 {
   
   public static void check () {
      boolean flag = true;
      while(flag) {
         for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
               if(top[i][j]==0 && x[i][j]!=0) {
                  flag = false;
               }
            }
         }
         for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
               if(top[i][j]==1 && x[i][j]==0) {
                  flag = false;
               }
            }
         }
         for(int j=0; j<3; j++) {
            if(Math.max(x[0][j], Math.max(x[1][j], x[2][j]))!=ff[j]) {
               flag = false;
            }
         }
         for(int i=0; i<3; i++) {
            if(Math.max(x[i][0], Math.max(x[i][1], x[i][2]))!=ss[i]) {
               flag = false;
            }
         }
         if(flag) {
            ans++;
            flag = false;
         }
      }
   }
   
   static int [][] x = new int [3][3];
   static int [][] top = new int [3][3];
   static int [][] front = new int [3][3];
   static int [][] side = new int [3][3];
   static int [] ff = {3, 3, 3};
   static int [] ss = {3, 3, 3};
   static int ans=0;
   
   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      ans=0;
      for(int i=0; i<3; i++) {
         for(int j=0; j<3; j++) {
            top[i][j] = sc.nextInt();
         }
      }
      for(int i=0; i<3; i++) {
         for(int j=0; j<3; j++) {
            front[i][j] = sc.nextInt();
            if(front[i][j]==0) {
               ff[j]--;
            }
         }
      }
      for(int i=0; i<3; i++) {
         for(int j=0; j<3; j++) {
            side[i][j] = sc.nextInt();
            if(side[i][j]==0) {
               ss[2-j]--;
            }
         }
      }
      for(int i=0; i<3; i++) {
         for(int j=0; j<3; j++) {
            if(top[i][j]==1) {
               x[i][j] = 1;
            }
         }
      }
      for(int a=0; a<=3; a++) {
         x[0][0] = a;
         for(int b=0; b<=3; b++) {
            x[0][1] = b;
            for(int c=0; c<=3; c++) {
               x[0][2] = c;
               for(int d=0; d<=3; d++) {
                  x[1][0] = d;
                  for(int e=0; e<=3; e++) {
                     x[1][1] = e;
                     for(int f=0; f<=3; f++) {
                        x[1][2] = f;
                        for(int g=0; g<=3; g++) {
                           x[2][0] = g;
                           for(int h=0; h<=3; h++) {
                              x[2][1] = h;
                              for(int i=0; i<=3; i++) {
                                 x[2][2] = i;
                                 check();
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
      }
      System.out.println(ans);
   }
}
