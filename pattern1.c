#include<stdio.h>

int main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        k = i;
        for(j=1; j<=i; j++)
        {
            printf("%d", k);
            k++;
        }

        printf("\n");
    }

    return 0;
}
