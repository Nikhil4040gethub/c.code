#include<stdio.h>
int main()
{
printf("Nikhil's project\n");
int a=1,num,sum=0;
printf("enter the value of a number : ");
scanf("%d",&num);
printf("\n");
do
{
printf ("%d, square=%d\n",a,a*a);
sum+=a;
a++;
}
while(a<num);
printf("sum of digits=%d",sum);
return 0;
}