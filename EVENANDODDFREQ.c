#include <stdio.h>
int main(){
int even=0,odd=0;
int arr[5]= {23,2,8,7,15};
for(int i=0;i<5;i++){
if(arr[i]%2==0){
    even++;
}else{
    odd++;
}
}
printf("THE FREQUENCY OF EVEN IS = %d\n",even);
printf("THE FREQUENCY OF ODD IS = %d",odd);
    return 0;
}