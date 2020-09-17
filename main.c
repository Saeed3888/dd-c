//Author: Saeed Alyami ssa5468@psu.edu
//Collaborator: Stanley Weiblinger skw5659@psu.edu
//Collaborator: Eric Byjoo ezb5481@psu.edu
//Collaborator: Kelly Chau kkc5558@psu.edu
//Section: 3
//Breakout: 3
#include <stdio.h>
#include <math.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n){
  if (n > 0){
    return n+ sum_n(n-1);
  }
 else{
   return n;
   }
 }
 void print_n(const char*s,int n){
   if (n > 0){
     printf("%s\n",s);
     print_n(s,n-1);
   }
 else {
   return;
  }
 }

int main(void){
  int n,sum;
  char *input = readline("Enter an int: ");
  n = atoi(input);
  sum = sum_n(n);
  printf("sum is %d.\n",sum);
  char *string = readline("Enter a string: ");
  print_n(string,n);
  
}