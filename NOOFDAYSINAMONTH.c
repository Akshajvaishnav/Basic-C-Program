#include<stdio.h>
int main(){
    int month;
printf("Enter the number of months :");
scanf("%d",&month);
switch (month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    printf("31 DAY IN A MONTH \n");
    break;
    case 4:
    case 6:
    case 9:
    case 11:
    printf("30 DAY IN A MONTH \n");
    break;
    case 2:
    printf("28 or 29 DAY IN A MONTH \n");
    break;
    default :
    printf("PLEASE ENTER A VALID NUMBER ONLY IN BETWEEN 1 TO 12\n");
}
    return 0; 
}