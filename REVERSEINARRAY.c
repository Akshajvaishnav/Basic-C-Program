#include <stdio.h>
int main(){
int arr[5]={23,2,8,7,15};
int temp;
for(int i=0;i<5/2;i++){
    temp = arr[i];
    arr[i]=arr[4-i];
    arr[4-i]= temp;
}
for(int i=0; i<5;i++){
    printf("%d , ",arr[i]);
}
    return 0;
}