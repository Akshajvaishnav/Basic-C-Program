#include <stdio.h>
#include<math.h>
int main(){
int c, temp, r;
for(int i=1;i<10000;i++){
    int sum=0;
    c=0;
    temp=i;
    while(temp>0){
        c++;
        temp/=10;
    }
    temp=i;
    while(temp>0){
        r=temp%10;
        sum = sum + pow(r,c);
        temp /=10;
    }
    if(sum==i)
    printf("%d\n",i);
}
    return 0;
}