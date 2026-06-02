#include<stdio.h>
#include<math.h>
int main(){
int a,b,c,root1,root2;
printf("Enter the value of a from quadratic equation : ");
scanf("%d",&a);
printf("Enter the value of b from quadratic equation : ");
scanf("%d",&b);
printf("Enter the value of c from quadratic equation : ");
scanf("%d",&c);
float d = b*b-4*a*c;
float e = sqrt(d);
float f = -b+e/2*a;
float  g= -b-e/2*a;
printf("The root 1 is : %f\n",f);
printf("The root 2 is : %f",g);

    return 0;
}
