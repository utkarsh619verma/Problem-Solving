#include<stdio.h>
#include<math.h>

int main()
{
 int n,i,j;
 scanf("%d",&n);

 printf("%d ",1);
 while(n%2==0)
 {
  printf("%d ",2);
  n=n/2;
 }

 for(i=3;i<sqrt(n);i=i+2)
 {
 while(n%i==0)
 {
  printf(" %d",i);
  n=n/i;
 }

}
return 0;
}
