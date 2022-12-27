#include <stdio.h>
#include <string.h>

int xstrcmp(char *,char *);

void main()
{
 char a[10],b[10];
 int l;
 printf("enter 1st string:");
 scanf("%s",a);
 fflush(stdin);
 printf("enter 2nd string:");
 scanf("%s",b);

 l=strcmp(a,b);
 if(l==0)
 {
  printf("equal");
 }
 else
 {
  printf("not equal");
 }

}
