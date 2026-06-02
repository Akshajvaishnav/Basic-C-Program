#include <stdio.h>
int main(){
    int num,remain,reverse=0;
    printf("ENTER THE NUM :");
    scanf("%d",&num);
    while(num>0){
        remain=num%10;
        reverse = reverse * 10+ remain;
        num = num/10;
    }
    printf("THE REVERSE OF GIVEN NO IS :%d",reverse);
    return 0;
}