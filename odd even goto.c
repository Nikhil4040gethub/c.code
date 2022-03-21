#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Nikhil's project\n");
	printf("enter the value : ");
	scanf("%d",&a);
	if(a%2==0)
	    goto even;
	else
	    goto odd;
	even:
			printf("the number is even\n");
	
	odd:
		printf("the number is odd");
	getch;
}
