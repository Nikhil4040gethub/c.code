#include<stdio.h>
int main()
{
printf("Nikhil's project\n");
int a=0,num;
printf("enter a number\n");
scanf(" %d",&num);
printf("\n");
do
{
printf("%d\n",a+1);
a++;
}
while(a<num);
return 0;
}