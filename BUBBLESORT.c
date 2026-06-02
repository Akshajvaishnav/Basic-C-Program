#include <stdio.h>

void bubblesort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int arr[] = {63,34,25,12,22,11,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    printf("ORIGINAL ARRAY : \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n ");

    bubblesort(arr,n);
    
    printf("SORTED ARRAY IN ASCENDING ORDER IS :  \n");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n ");

    return 0;
}