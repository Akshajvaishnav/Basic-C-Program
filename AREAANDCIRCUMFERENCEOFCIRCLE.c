#include<stdio.h>
#include<math.h>
int main(){
float r;
printf("ENTER YOUR RADIUS : ");
scanf("%f",&r);
float PI = 3.14;
float a,b;
a = (PI*pow(r,2));
b = (2*PI*r);
printf("AREA IS : %f\n",a);
printf("CIRCUMFERENCE IS : %f",b);

    return 0;
}