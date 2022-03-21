#include<stdio.h>
float avg(float a,float b,float c);
float avg(float a,float b,float c)
{
return((a+b+c)/3);
}
int main()
{
printf("Nikhil's project\n");
int num1,num2,num3;
printf("enter three numbers: ");
scanf("%d %d %d",&num1,&num2,&num3);
printf ("average of three numbers =%2.f",avg(num1,num2,num3));
return 0;
}