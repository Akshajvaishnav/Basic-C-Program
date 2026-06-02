#include <stdio.h>
int main(){
int i,j,rows,cols;
printf("ENTER THE NO OF ROWS AND COLUMNS : \n");
scanf("%d %d",&rows,&cols);
int A[rows][cols],B[rows][cols],C[rows][cols];
printf("ENTER THE ELEMENT OF 1st MATRIX \n");
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        scanf("%d",&A[i][j]);
    }
}
printf("ENTER THE ELEMENT OF 2st MATRIX \n");
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        scanf("%d",&B[i][j]);
    }
}
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        C[i][j] = A[i][j]+B[i][j];
    }
}
    for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        printf("%d\n",C[i][j]);
    }
    }
    return 0;
}