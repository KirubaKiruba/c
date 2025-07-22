#include<stdio.h>
void main()
{
int num,d1,d2,d3,d4;
printf("Enter the 3 digit number:\n");
scanf("%d",&num);
d1=num%10;                     //unit example 123%10=3
d2=(num/10)%10;                //Tens         123/10=12  12%10=2
d3=(num/100)%10;               //Hundreds     123/100=1   1%10=1
d4=(num/1000)%10;              //Thousands
num=((num>=1)*(d1%2))+((num>=10)*(d2%2))+((num>=100)*(d3%2))+((num>=1000)*(d4%2));
   //(123>=1)*(3%2)+(123>=10)*(2%2)+(123>=100)*(1%2)+(123>=1000)*(0%2)
  // 1*1+1*0+1*1+0*0
  //1+0+1+0
  //2
printf("num  = %d",num);
}
