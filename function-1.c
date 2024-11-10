#include<stdio.h>
#include<math.h>
int aa(int x);
int main(){
  printf(" we get %d ", aa(aa(23)));
     return 0;
} int aa(int x){
  int p = x/10;
   x++;
   p =p+(p*x);
   return p;

}