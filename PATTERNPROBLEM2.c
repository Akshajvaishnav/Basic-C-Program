#include <stdio.h>
int main(){
int n;
float sum = 0.0;
printf("ENTER THE NUMBER = ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    sum += (1.0/i);
}
printf("THE SUM OF THE SERIES IS = %2f",sum);
    return 0;
}