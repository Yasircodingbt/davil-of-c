#include<stdio.h>
#include<math.h>
int sum(int n);
int main(){
      int s,n;
      printf("enter a num : ");
      scanf("%d",&n);
     if (n >= 0)
     {
          s = sum(n);
       printf(" sum of number form 0 to %d is %d ", n, s);
       
     }else
     {
           printf(" sorry your enter  num is nagative number");
     }
     
return 0;


} int sum(int x){
     int s=0;
     for (int i = 1; i <=x; i++)
           s += i;  
       return s;
}
