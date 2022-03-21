#include<stdio.h>
#include<math.h>
int main()
{
printf("Nikhil's project");
float principal,rate,time,si,ci,r;
printf("enter the principal amount \n");
scanf(" %f",&principal);
printf("enter the rate of interest\n");
scanf("%f",&rate);
printf("enter the period of time\n");
scanf("%f",&time);
si=principal*(rate/100)*time;
printf("simple interest =%f\n",si);
ci=principal*pow(1+rate/100,time)-principal;
printf("compound interest =%f\n",ci);
return 0;
}