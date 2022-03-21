#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Nikhil's project\n");
	printf("enter two numbers : \n");
	scanf("%d %d",&a,&b);
	a==b?printf("number %d and number %d are equal",a,b)
	:printf("number %d and number %d are different",a,b);
	getch();
}
