/*1
   11
   21
   1211
   111221*/

#include<stdio.h>

int main()
{
     int num,i,j,l,h,m,A[100][100];
     printf("enter the number:");
     scanf("%d",&num);
     m=num;
     l=0;
     h=2*num-1;
    while(num>0)
    {
        for(i=l;i<h;i++)
        {
            for(j=l;j<h;j++)
            {
                if(i==l || i==h-1 || j==l || j==h-1)
                {
                A[i][j]=num;
                }
            }
        }
        l++;
        h--;
        num--;
    }
    l=0;
    h=2*m-1;
    for(i=l;i<h;i++)
    {
        for(j=l;j<h;j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }

     return 0;

}
