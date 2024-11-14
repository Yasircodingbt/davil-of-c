#include<stdio.h>
#include<math.h>
float converttmep(float celsius );
int main(){

 float far= converttmep(37);
 printf(" far is : %f", far);
     return 0;
}float converttmep(float celsius){
     float far = celsius * (9.0/5.0)+ 32;
     return far;

}
