//Author: Saeed Alyami ssa5468@psu.edu
#include <stdio.h>
#include <math.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n){
  if (n > 0){
    return n%10 + digit_sum(n/10);
  }
 else{
   return n;
   }
 }
 void print_n(const char*s,int n){
   if (n > 0){
     printf("%s\n",s);
     print_n(s,n/10);
   }
 else {
   return;
  }
 }

int main(void){
  int n,sum;
  char *input = readline("Enter an int: ");
  n = atoi(input);
  sum = digit_sum(n);
  printf("sum of digits of %d is %d.\n",n,sum);
  
}