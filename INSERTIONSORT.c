#include <stdio.h>
void insertionsort(int arr[],int n){
    int i,key,j;
    for(i=1;i<n;i++){
        key = arr[i];
        j = i-1;
        while (j>=0 && arr[j] > key){
            arr[j+1] =  arr[j];
            j = j-1;
        }
        arr[j+1]=key;
    }
}
void printarray(int arr[],int n){
    for(int i=0; i<n;i++){
        printf("%d ",arr[i]);
    }
    printf(" \n ");
}
int main(){
    int arr[]= {12,11,13,5,6};
    int n=sizeof(arr) / sizeof(arr[0]);
    printf("ORIGINAL ARRAY : \n");
    printarray(arr,n);
    insertionsort(arr,n);
    printf("SORTED ARRAY IN ASCENDING ORDER IS : \n");
    printarray(arr,n);
    
    return 0;
}