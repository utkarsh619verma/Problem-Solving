/* input N=16
   output=16 11 6 1 -4 6 11 16
   geeks for geeks practice code 1*/

   #include <stdio.h>
   int main()
   {
    int n,i,j;

    printf("enter the number of rows:");
    scanf("%d",n);

    for(i=1;i<=n;i++)
    {
     if(i==1)
      {
       printf("%c",("*")*n);
      }

    }
    return 0;
   }
