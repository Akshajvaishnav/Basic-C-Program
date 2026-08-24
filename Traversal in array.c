#include<stdio.h>
#define MAX 100
int n ,i;
void traversal (int arr[100]);
int main()
{
 int arr[MAX];
 printf("Enter number of elements:");
 scanf("%d",&n);
 printf("Enter %d elements:\n",n);
 for(int i = 0; i<n; i++)
{
    scanf("%d",&arr[i]);
}
    traversal (arr);
return 0 ;

}
void traversal ( int arr [])
{
printf("Array elements are :");

for( int i=0;i < n; i++)
{  printf("%d", arr[i]);}



}
