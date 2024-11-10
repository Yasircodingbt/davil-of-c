#include<stdio.h>
#include<math.h>
int power(int x, int y);
  int main(){
   int a,b;
   printf("check two number  :  ");
   scanf("%d\t%d",&a,&b);
   int c=power(a,b);
    printf("%d poewr is %d = %d",a,b,c);
     return 0;
  } int power(int x, int y){
 int p=1;
 for (int i = 1; i <=y; i++)
      p=p*x;
  return p;
  }
