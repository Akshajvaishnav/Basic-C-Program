#include <stdio.h>
void selectionsort(int arr[],int n){
    int i,j,min_idx,temp;

    for(i=0;i<n;i++){
    min_idx = i;

    for(j=i+1;j<n;j++){
        if(arr[j] < arr[min_idx]){
            min_idx = j;
        }
    }
    if(min_idx != i){
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
     }
    }
}
void printarray(int arr[],int size){
    for(int i=0; i<size;i++){
        printf("%d ",arr[i]);
    }
    printf(" \n ");
}
int main(){
    int arr[]= {63,25,12,22,11};
    int n=sizeof(arr) / sizeof(arr[0]);
    printf("ORIGINAL ARRAY : \n");
    printarray(arr,n);
    selectionsort(arr,n);
    printf("SORTED ARRAY IN ASCENDING ORDER IS : \n");
    printarray(arr,n);
    
    return 0;
}