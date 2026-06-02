#include<stdio.h>
int main(){
int i,j,cols,rows,freq=0,num;
printf("ENETR NO OF ROWS AND COL :\n");
scanf("%d %d",&rows,&cols);
int A[rows][cols];
printf("ENTER THE ELEMENT OF 1ST MATRIX \n");
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        scanf("%d",&A[i][j]);
    }
}
printf("ENTER THE NO FOR CHECKING ITS FREQUENCY : ");
scanf("%d",&num);
    for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
    if(A[i][j]==num){
        freq++;
      }
    }
}
printf("FREQUENCY OF ELEMENTS IS : %d",freq);
    return 0;
}