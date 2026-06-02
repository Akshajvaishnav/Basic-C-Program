#include<stdio.h>
#include<math.h>
int main(){
int firstnum,secondnum,result;
char operators;

printf("ENTER THE FIRST NUMBER :");
scanf("%d",&firstnum);
printf("ENTER THE SECOND NUMBER :");
scanf("%d",&secondnum);
printf("ENTER THE OPERATOR :");
scanf(" %c",&operators);

switch (operators){
    case'+':
    result = firstnum+secondnum;
    printf("ADDITION : %d",result);
    break;
    case'-':
    result = firstnum-secondnum;
    printf("SUBSTRACTION :%d",result);
    break;
    case'*':
    result = firstnum*secondnum;
    printf("MULTIPLICATION : %d",result);
    break;
    case'/':
    result = firstnum/secondnum;
    printf("QUOTIENT IS : %d",result);
    break;
    default :
    printf("OOPS ! WRONG CHOICE");
}
    return 0;
}