#include<stdio.h>
int main(){
int sub1,sub2,sub3,sub4,sub5;

printf("ENTER YOUR SUBJECTS MARKS :");
scanf("%d",&sub1);
scanf("%d",&sub2);
scanf("%d",&sub3);
scanf("%d",&sub4);
scanf("%d",&sub5);

int sum = sub1+sub2+sub3+sub4+sub5;
printf("%d\n",sum);

float per = (float) sum/5
;
printf("%f\n",per);
if(per>=90){
    printf("A");
}else if(per>=80){
    printf("B");
}else if(per>=60){
    printf("C");
}else{
    printf("D");
}
   return 0;
}