#include <stdio.h>
int main(){
int sum=0,avg;
int arr[5]= {23,2,8,7,15};
for(int i=0;i<5;i++){
    sum += arr[i];
}
printf("THE SUM IS = %d\n",sum);
avg=sum/5;
printf("THE AVERAGE IS = %d",avg);
    return 0;
}