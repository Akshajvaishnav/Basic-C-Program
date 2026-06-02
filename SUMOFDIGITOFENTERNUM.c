#include<stdio.h>
int main(){
int num,r,sum=0;
printf("ENTER THE NUMBER :");
scanf("%d",&num);
while(num!=0){
    r = num % 10;
    sum = sum + r;
    num = num / 10;
}
printf("THE SUM OF DIGITS OF NO IS :%d",sum);
    return 0;
}