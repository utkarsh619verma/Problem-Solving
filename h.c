#include<stdio.h>

int fact(int a);
int main()
{
 int i,fact=1,n,f;

 printf("enter the number of terms in factorial:");
 scanf("%d",&n);
       f=fact(n);
       printf("%d\n",f);
       return 0;
}


int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}


