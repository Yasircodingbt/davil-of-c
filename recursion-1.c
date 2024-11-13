#include<stdio.h>
#include<math.h>
void printhw(int count);
int main(){  
        

printhw(5);

return 0;
 
}void printhw(int count){
if(count ==0){  
     return;
}
printf("hello word \n");
printhw(count-1);
}