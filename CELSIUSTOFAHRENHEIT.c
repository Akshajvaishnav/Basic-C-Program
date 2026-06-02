#include<stdio.h>
#include<math.h>
int main(){
float celsius,fahrenheit;

printf("ENTER TEMPERATURE IN CELSIUS : ");
scanf("%f",&celsius);

fahrenheit = (celsius * 9/5) +32;

printf("TEMPERATURE IN FAHRENHEIT IS : %2f",fahrenheit);

    return 0;
}