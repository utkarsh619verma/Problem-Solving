#include<stdio.h>

int main()
{
armstrong(371);
}

int armstrong(x)
{
int r,sum=0,temp;
temp=x;
 while(x>0)
 {
 r=x%10;
 sum=sum+(r*r*r);
 x=x/10;
 }
if(temp == sum)
printf("%d is an armstrong number!!",temp);

else
printf("%d is not an armstrong number",temp);
}
