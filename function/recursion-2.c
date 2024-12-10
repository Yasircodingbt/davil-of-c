#include<stdio.h>
#include<math.h>
int fact(int n);
int main(){

printf("fact is : %d", fact(6));


return 0;

 
}int fact(int n){
  if (n == 0){
    return 1;
      
  } int factNm1 = fact(n-1); // FACT OF 1 to n
  int factN = factNm1 * n;
  return factN;
}