#include<stdio.h>
#include<math.h>
int main(){
int sub1,sub2,sub3,sub4,sub5;
printf("ENTER YOUR SUBJECT 1 MARKS : ");
scanf("%d",&sub1);
printf("ENTER YOUR SUBJECT 2 MARKS : ");
scanf("%d",&sub2);
printf("ENTER YOUR SUBJECT 3 MARKS : ");
scanf("%d",&sub3);
printf("ENTER YOUR SUBJECT 4 MARKS : ");
scanf("%d",&sub4);
printf("ENTER YOUR SUBJECT 5 MARKS : ");
scanf("%d",&sub5);

int sum = sub1 + sub2 + sub3 + sub4 + sub5 ;
float avg = (float)  sum/5;
printf("YOUR AVERAGE IS : %f",avg);

    return 0;
}