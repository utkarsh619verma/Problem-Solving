#include<stdio.h>

int main()
{
 int n1,sum1=0,sum2=0,mid,multiply;
 printf("enter the number of elements in an array:");
 scanf("%d",&n1);
 int arr[n1];
 for(int i=0;i<n1;i++)
 {
    scanf("%d",&arr[i]);
 }
 mid=n1/2;

 for(int i=0;i<mid;i++)
 {
   sum1=sum1+arr[i];
 }

 for(int i=mid;i<n1;i++)
 {
   sum2=sum2+arr[i];
 }
 multiply=sum1*sum2;
 printf("%d",multiply);

return 0;
}
