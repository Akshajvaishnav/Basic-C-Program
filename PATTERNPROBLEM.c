#include <stdio.h>
int main(){
int i,j,k;
for(i=0;i<6;i++){
    for(k=0;k<6-i-1;k++){
    printf("  ");
    }
    int value = 1;
    for(j=0;j<=i;j++){
        printf("%3d ",value);
        value = value*(i-j)/(j+1);
    }
    printf("\n");
}
return 0;
}