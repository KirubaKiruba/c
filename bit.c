#include<stdio.h>
void main()
{
int num,pos,op,c=0; //counter c=0
printf("Enter The number....\n");
scanf("%d",&num);
L1:                                     // this is used for couter operator
printf("Enter The pos....\n");
scanf("%d",&pos);
if(pos>=0 && pos<=31)
{
     printf("Enter the option \n1)set\n2)clear\n3)comp\n");
     scanf("%d",&op);
     if(op==1)
     {
     num=num|1<<pos;
     printf("num=%d",num);
     }
     else if(op==2)
     {
     num=num&~(1<<pos);
     printf("num=%d",num);
     }
     else if(op==3)
     {
     num=num^1<<pos;
     printf("num=%d",num);
     }  
     else
     printf("unknown option...\n");
}
else
{
printf("Wrong Bit pos as input\n");
c++;                                      // c increment by 1 and loop continue
if(c<3)
goto L1;
}

}
