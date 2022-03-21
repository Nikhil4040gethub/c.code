#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,t,max;
	printf("Nikhil's project\n");
	printf("enter three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	t=a>b?a:b;
	max=t>c?t:c;
	printf("max value is %d\n",max);
	getch;
}
