#include<stdio.h>
int main(){
int num, oddsum=0, evensum=0;
printf("ENTER THE NO :");
scanf("%d",&num);
for ( int i=0; i<=num; i++){
    if(i%2==0){
        evensum+= i;
    }else{
        oddsum += i;
    }
}
printf("SUM OF EVEN NO IS :%d\n",evensum);
printf("SUM OF ODD NO IS :%d",oddsum);

    return 0;
}