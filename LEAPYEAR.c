#include<stdio.h>
int main(){
    int year;
printf("ENTER THE YEAR :");
scanf("%d",&year);
if(year%4==0){
    if(year%100==0){
        if(year%400==0){
            printf("THIS YEAR IS A LEAP YEAR");
        }else{
            printf("THE YEAR IS NOT A LEAP YEAR");
        }
    }else{
        printf("THE YEAR IS A LEP YEAR");
    }
}else{
    printf("THIS YEAR IS NOT A LEAP YEAR");
}
    return 0;
}