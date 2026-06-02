#include <stdio.h>
int main(){
int i,j,rows,cols,sum=0;
printf("ENETR NO OF ROWS AND COL :\n");
scanf("%d %d",&rows,&cols);
int A[rows][cols];
printf("ENTER THE ELEMENT OF 1ST MATRIX \n");
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        scanf("%d",&A[i][j]);
    }
}
    for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
    if(i==j){
        sum += A[i][j];
      }
    }
}
printf("%d",sum);
    return 0;
}