#include<stdio.h>
int main(){
int i,j,rows,cols;
printf("ENTER THE NO OF ROWS AND COLUMNS : \n");
scanf("%d %d",&rows,&cols);
int A[rows][cols];
int identity = 0;
printf("ENTER THE ELEMENT OF 1st MATRIX \n");
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        scanf("%d",&A[i][j]);
    }
}
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        if(i==j && A[i][j] !=1){
            identity = -1;
            break;
        }
    }
}
for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        if(i!=j && A[i][j] !=0){
            identity = -1;
            break;
        }
    }
}
if(identity = 1){
    printf("THE MATRIX IS IDENTITY.");
}else{
    printf("THE MATRIX IS NOT IDENTITY.");
}

return 0;
}