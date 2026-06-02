#include <stdio.h>
int main(){
int i,j,rows,cols,rowsum1=0,rowsum2=0,columnsum1=0,columnsum2=0;
printf("ENTER NO OF ROWS AND COL :\n");
scanf("%d %d",&rows,&cols);
int A[rows][cols];
printf("ENTER THE ELEMENT OF 1ST MATRIX \n");
for(i=0;i<rows;i++)
    for(j=0;j<cols;j++){
        scanf("%d",&A[i][j]);
    }
    rowsum1 = (A[0][0]+A[0][1]);
    rowsum2 = (A[1][0]+A[1][1]);
    printf("FIRST ROW SUM : %d\n",rowsum1);
    printf("SECOND ROW SUM : %d\n",rowsum2);
    columnsum1 = (A[0][0]+A[0][1]);
    columnsum2 = (A[1][0]+A[1][1]);
    printf("FIRST COL SUM : %d\n",columnsum1);
    printf("SECOND COL SUM : %d\n",columnsum2);
    return 0;
}