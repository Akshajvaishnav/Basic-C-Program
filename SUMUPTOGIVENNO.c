#include<stdio.h>
int main(){
int n, sum=0;
printf("ENTER THE NUMBER :");
scanf("%d",&n);
for (int i=0; i<=n ; i++){
    sum += i;
}
printf("THE SUM UPTO GIVEN NO IS : %d",sum);
    return 0;
}