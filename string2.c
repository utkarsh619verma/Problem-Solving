#include<stdio.h>

void main()
{
   char str[20],rev[20];

   printf("enter the string here:");
   scanf("%s",&str);
   reverse(str);
   printf("%s",str);

    return 0;
}

void reverse(char *q)
{

    char*p,a;
    while(*p!='\0')
    {
    p++;
    }
    p--;

    while(q<p)
    {
     a=*q;
     *q=*p;
     *p=a;
    }
}
