#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Nikhil's project\n");
	printf("enter the number : \n");
	scanf("%d",&num);
	if(num>=100&&num<=1000)
	{
		printf("%d is greater than 100 and less than 1000\n",num);
	}
	else
	{
		printf("%d is less than 100 or greater than 1000\n",num);
	}
	getch;
}
