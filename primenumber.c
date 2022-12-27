#include<stdio.h>

int main()
{
int m,n;
printf("enter range");
scanf("%d" "%d",&m,&n);
primenumber(m,n);
getch();
}
void primenumber(int x,int y)
{
    int n,i,q=0,j;
    for(i=x;i<=y;i++)
    {
        for(j=2;j<i/2;j++)
        {
            if(i%j==0)
            {
                q++;
            }
        }
        if(q==0)
        printf("%d ",i);
    }

}
