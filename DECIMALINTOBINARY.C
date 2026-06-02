#include <stdio.h>
int main(){
int n,r,ans=0,contri=1;
printf("ENTER THE NUMBER :");
scanf("%d",&n);
while(n>0){
    r = n%2;
    if(r==1)
    ans += contri;
    n=n/2;
    contri *= 10;
}
printf("%d",ans);
    return 0;
}