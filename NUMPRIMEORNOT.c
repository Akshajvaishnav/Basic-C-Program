#include<stdio.h>
int main(){
int n, flag = 0;
printf("ENTER A NUMBER TO BE CHECKED :");
scanf("%d",&n);
if(n<=1){
    printf("%d is not a prime number.");
}else{
    for(int i=2; i<n; i++){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
  if(flag == 0)
  printf("%d is a prime number.",n);
  else
  printf("%d is not a prime number.",n);
}
    return 0;
}