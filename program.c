#include<stdio.h>
#include<math.h>
int mix(int a,int b);
int main(){
     int a,b;
     printf(" enter a num : ");
     scanf("%d",&a);
     printf("enter a second num : ");
     scanf("%d",&b); 
int m= mix(a,b);
     printf(" mixmum num is %d ", m);

  return 0;
} int mix(int a ,int b){
     if (a>b)
     {
          return a;
     }else{
          return b;
     }
     
}