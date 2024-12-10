#include<stdio.h>
#include<math.h>
float square_area(float side);
float circle_area(float rad);
float rectangle_area(float a, float b);

int main() { 
     float a ,b;
     printf(" enter a float  num :");
     scanf("%f",&a);
     printf(" enter a float num :");
     scanf("%f", &b);
     printf(" rectangle area is %f \n ", rectangle_area(a,b) );
     float side ;
     printf(" \n enter  a side  :  ");
     scanf("%f",&side);
     printf(" area is   %f \n",square_area(side));
     float rad;
     printf(" \n enter  rad : ");
     scanf("%f",&rad);
     printf(" circle area is %f \n ",circle_area(rad));
     return 0;
}
float square_area( float side){
        return side *side;     

}float circle_area(float rad){
     return 3.14*rad*rad;
}float rectangle_area(float a, float b){
     return a+b;
}


 
  