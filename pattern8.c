/* *****
    ***
     *
    ***
   *****
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        if(i<=3)
        {
         for(int j=1;j<=i-1;j++)
           {
            printf(" ");
           }
           for(j=1;j<=7-2*i;j++)
           {
            printf("*");

           }
           printf("\n");
        }

        else
        {
            for(j=1;j<=5-i;j++)

                {
                printf(" ");
                }
                for(j=1;j<=2*i-5;j++)
                {
                printf("*");
                }
                printf("\n");
        }
    }
 return 0;
}
