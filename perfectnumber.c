#include<stdio.h>

int main()
{
int m,n;
printf("enter range");
scanf("%d" "%d",&m,&n);
perfectnumber(m,n);
getch();
}
void perfectnumber(int x,int y)
{
    int k,sum,j;
    for(k=x;k<=y;k++)
    {
     sum=0;
     for(j=1;j<k/2;j++)
     {
      if(k%j==0)
      {
        sum=sum+j;
      }
     }
    }
 printf("%d",sum);
}
