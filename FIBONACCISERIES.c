#include<stdio.h>
int main(){
int first =0,second=1;
int n;
printf("ENTER THE NO OF TERMS :");
scanf("%d",&n);
for( int i=1; i<=n; i++){
printf("%d\n",first);
int next = first + second;
first = second;
second = next;
}
    return 0;
}