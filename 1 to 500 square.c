#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,root;
printf("Nikhil's project\n");
printf("enter the number : ");
scanf("%d",&a);
for (b=1;b<=a;b++)
{
root=sqrt(b);
root=root*root;
if(b==root)
{
	printf("\nb=%d",b);
}
}
return 0;
}