#include<stdio.h>
#include<math.h>

int main()
{
 int radius,diagonal;

 printf("enter the radius of circle:");
 scanf("%d",&radius);
 diagonal=radius*2;

 float base=radius*1.414;
 float area=base*base;

printf("%f",area);

 return 0;


}
