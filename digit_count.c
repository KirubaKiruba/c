#include<stdio.h>
void main()
{
int num,d1,d2,d3,d4;
printf("Enter the 5 digit number:\n");
scanf("%d",&num);
d1=(num/10)!=0;
d2=(num/100)!=0;
d3=(num/1000)!=0;
d4=(num/10000)!=0;
num=d1+d2+d3+d4;// i/p=123 but o/p=2 ans=3 
printf("num  = %d",num);
}
