#include<stdio.h>
#include<math.h>
int main(){
int a,b,c;
printf("ENTER NO 1 : ");
scanf("%d",&a);
printf("ENTER NO 2 : ");
scanf("%d",&b);

c = a;
a = b;
b = c;

printf(" NO 1 IS : %d\n",a);
printf(" NO 2 IS : %d",b);
    return 0;
}