/*to print pattern of the form
A
BB
CCC*/
#include<stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
            {

                printf("%c",64+j);

            }

        printf("\n");
    }
         return 0;
}
