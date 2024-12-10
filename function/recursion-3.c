#include<stdio.h>
#include<math.h>
int calc_percantage(int science ,int nath , int com);
int main(){
 int math = 88 ;
  int sc = 56 ;
 int  com = 98;
   int per= calc_percantage(math ,sc, com)  ;
   printf(" the percantage is : %d", per);
return 0;
}int calc_percantage(int math ,int science, int com){
       return((math + science + com)/3);         

}