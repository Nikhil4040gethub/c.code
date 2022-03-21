#include<stdio.h>
#include<conio.h>
void main()
{
	int num,digit;
	printf("nikhil's project\n");
	printf("enter a number\n");
	scanf("%d",&num);
	digit=num%10;
	if(digit==5)
	{
		num=num/10;
		printf("square : %d%d\n",num*num++,digit*digit);
	}
	else
	{
		printf("invalid input");
	}
	getch;
}
