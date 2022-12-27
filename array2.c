#include<stdio.h>

int  main()
{
 int n,i,j;
 printf("enter the number of elements in array:");
 scanf("%d",&n);

 int a[n];
 for(i=0;i<=n&&j<n;i++)
 {
  if(i%2!=0){
   a[j]=i;
   j++;
  }
 }
  for(i=n;i>0&&j<n;i--)
 {
  if(i%2==0){
   a[j]=i;
   j++;

}
return 0;
 }
