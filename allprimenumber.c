#include <math.h>
#include <stdio.h>

void primeFactors(int n)
{

    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    if (n > 2)
        printf("%d ", n);
}


int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    primeFactors(n);
    return 0;
}
