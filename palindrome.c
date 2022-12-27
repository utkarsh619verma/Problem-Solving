#include<stdio.h>

int main()
{
palindrome(121);

}
int palindrome(x)
{
int r,sum=0,temp;
temp=x;
 while(x>0)
 {
 r=x%10;
 sum=(sum*10)+r;
 x=x/10;
 }
if(temp==sum)
printf("%d is a palindrome number!!",temp);

else
printf("%d not a palindrome number",temp);
}

