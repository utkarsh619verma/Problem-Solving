// Online C compiler to run C program online
#include <stdio.h>
int xstrlen(char *);
void main() {
   char str[10];
   int l;
   printf("enter the string:");
   scanf("%s",str);
   l=xstrlen(str);
   printf("%d",l);

}

int xstrlen(char *p)
{
    int c=0;
    while(*p != '\0')
    {
        c++;
        p++;
    }
    return(c);
}
