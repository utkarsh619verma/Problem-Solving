#include<stdio.h>
int main(){
    int test;
    printf("enter the number of chocolate squares ");
    scanf("%d",&test);
    int arr[test];
    for(int i=0;i<test;i++){
        printf("enter the tastiness level of the chocolate square ");
        scanf("%d",arr[i]);
    }
    int i=0,j=test-1;
    while(i<=j){
        if(arr[i]>arr[j]){
            i++;
        }
        else{
            j--;
        }
    }
    printf("%d",arr[i]);
    return 0;
}
