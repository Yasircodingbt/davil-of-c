#include<stdio.h>
#include<math.h>
void righttri(int x,int y,int z);
int main(){ 
int a,b,c;
printf(" enter  a angle 1 : ");
scanf("%d",&a);
printf(" enter a angle 2 : ");
scanf("%d",&b);
printf("enter a angle 3 : ");
scanf("%d",&c);
 righttri(a,b,c);
return 0;

}void righttri(int x, int y, int z){
  x+y+z==180 && x > 0 && y > 0 && z > 0 ? printf("triangle is vaild \n ."):printf("triangle is not vaild \n");

}
