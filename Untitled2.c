#include<stdio.h>
#include<conio.h>
int main()
{
	int num,n;
	printf("Nikhil's project\n");
	printf("enter the number : ");
	scanf("%d",&num);
	printf("number :");
	for(n=1;n<=num;n++)
	printf("%d\n",n);
	printf("square");
	for(n=1;n<=num;n++)
	{
		printf("\n%d",n*n);
	}
return 0.;
}