#include <stdio.h>
int main(){
int arr[5]={23,2,8,7,15};
int max = arr[0];
int min = arr[0];
for(int i=0; i<5; i++){
    if(arr[i]> max){
        max = arr[i];
    }
    if(arr[i]< min){
        min = arr[i];
    }
}
printf("THE MAXIMUM IS : %d\n",max);
printf("THE MINIMUM IS : %d\n",min);
    return 0;
}