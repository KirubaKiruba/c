#include<stdio.h>
void main()
{
int num,r1,r2,r3,r;
printf("Enter the Number");
scanf("%d",&num);
r1=num%10;
r2=(num/10)%10;
r3=(num/100)%10;
r=r1+r2+r3;
printf("o/p1:%d",r);
}
