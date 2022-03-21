#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int ch;
	double a,b,c;
	printf("Nikhil's project\n");
	printf("enter the first number :");
	scanf("%lf",&a);
	printf("enter the second number :");
	scanf("%lf",&b);
	printf("arithemetic functions\n");
	printf("addition:1\n");
	printf("substraction:2\n");
	printf("multiplication:3\n");
	printf("division:4\n");
	printf("modulas:5\n");
	printf("enter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			c=a+b;
			printf("%.2lf",c);
			break;
		case 2:
			c=a-b;
			printf("%.2lf",c);
			break;
		case 3:
			c=a*b;
			printf("%.2lf",c);
			break;
		case 4:
			c=a/b;
			printf("%.2lf",c);
			break;
		case 5:
				c=fmod(a,b);
				printf("%.2lf",c);
				break;
		default:
			printf("wrong output : \n");
	}
	getch;
}
