#include<stdio.h>
int main(){
int i,j,rows,cols,min=0,max=0;
printf("ENTER THE NO OF ROWS AND COLUMNS : \n");
scanf("%d %d",&rows,&cols);
int A[rows][cols];
printf("ENTER THE ELEMENT OF 1st MATRIX \n");
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        scanf("%d",&A[i][j]);
    }
}
min = A[0][0];
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        if(A[i][j]<min){
            min = A[i][j];
        }
    }
}
printf("THE MAXIMUN IN ARRAY IS : %d\n",min);
max = A[0][0];
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        if(A[i][j]>max){
            max = A[i][j];
        }
    }
}
printf("THE MAXIMUN IN ARRAY IS : %d\n",max);


    return 0;
}