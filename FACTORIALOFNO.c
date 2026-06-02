#include<stdio.h>
int main(){
int n,factorial =1;
printf("ENTER THE NO TO FIND FACTORIAL OF :");
scanf("%d",&n);
for(int i=1; i<=n; i++){
    factorial = factorial * i;
}
printf("FACTORIAL OF GIVEN NO IS : %d",factorial);
    return 0;
}