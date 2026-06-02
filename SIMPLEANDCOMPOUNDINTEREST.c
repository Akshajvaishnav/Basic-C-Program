#include<stdio.h>
#include<math.h>
int main(){
int p,r,t;
printf("ENTER PRINCIPLE : ");
scanf("%d",&p);
printf("ENTER RATE : ");
scanf("%d",&r);
printf("ENTER TIME : ");
scanf("%d",&t);


int SI = (p*r*t)/100;
int CI = pow((1+r/100),t);

printf("YOUR SI, CI IS %d,%d" ,SI,CI);

    return 0;
}