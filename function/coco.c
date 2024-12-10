#include<stdio.h> 
#include<math.h>
int pr(int n);
int main(){
int n;
    printf("enter a num :");
    scanf("%d",&n);
    if(pr( n)){
  printf(" %d is a prime num  \n", n);
    }else{
     printf(" is not a prime number %d \n " , n);
    }
     return 0;
} int pr(int n){
     if(n <= 1){
          return 0;
     }for (int  i = 2; i * i <= n; i++)
     {
          if(n%i == 0){
               return 0;
          }
     }
       return 1;
}

