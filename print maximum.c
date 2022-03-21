#include<stdio.h>
#include<conio.h>
void main()
{
	double n1,n2,n3;
	printf("Nikhil's project\n");
	printf("enter three numbers : \n");
	scanf("%lf %lf %lf",&n1,&n2,&n3);
	if(n1>=n2&&n1>=n3)
	{
		printf("%.2lf is greatest and maximum number\n",n1);
	}
	else  if(n2>=n1&&n2>=n3)
	{
		printf("%.2lf is greatest and maximum number\n",n2);
	}
	else
	{
		printf("%.2lf is greatest and maximum number\n",n3);
	}
	getch;
}
