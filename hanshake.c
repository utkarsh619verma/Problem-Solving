#include<stdio.h>


int main()
{
    int num;

    printf("enter the number of peoples:");
    scanf("%d",&num);

    int total = num * (num-1) / 2; // Combination nC2

    printf("For %d people there will be %d handshakes", num, total);

    return 0;

}
