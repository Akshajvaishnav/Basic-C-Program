#include<stdio.h>
#include<math.h>
int main(){
int a,b,c;
printf("ENTER NUMBER 1 : ");
scanf("%d",&a);
printf("ENTER NUMBER 2 : ");
scanf("%d",&b);
printf("ENTER NUMBER 3 : ");
scanf("%d",&c);

if(a>b&&a>c){
    printf("GREATEST IS a ");
}else if(b>a&&b>c){
     printf("GREATEST IS b ");
}else{
     printf("GREATEST IS c ");
}

    return 0;
}