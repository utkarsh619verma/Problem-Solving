// Online C compiler to run C program online
#include <stdio.h>

void main() {
   char str[20];
   int n;
   printf("enter the string here:");
   scanf("%s",&str);
   n=xstringlen(str);
   printf("%d",n);
    return 0;
}

int xstringlen(char *p)
{
    int count=0,i=0;
    while(*p!='\0')
    {
        p++;
        count++;
    }
    return(count);
}

