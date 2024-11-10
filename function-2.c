#include<stdio.h>
#include<stdio.h>
int square(int x);
int main(){
     int x;
printf(" check for number = ");
scanf("%d",&x);

int m=square(x);
printf("%d square is %d", x, m);
return 0;
}int square(int x){

return x*x;

}