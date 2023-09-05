// Palindrome program using recursion

#include<stdio.h>
 int palindrome(int num)
 {
     static int r_num=0, r;
     if(num!=0)
     {
         r=num%10;
         r_num=r_num*10+r;
         palindrome(num/10);
     }
     return r_num;
 }

 int main()
 {
     int n, r_num;
     printf("Enter the number:");
     scanf("%d", &n);
     r_num=palindrome(n);

     if(n==r_num)
     {
         printf("Palindrome");
     }
     else
     {
         printf("Not an palindrome");
     }
     return 0;
 }
