#include<stdio.h>
#include<conio.h>
void main()
{
	float radius,perimeter,area;
	float pi=3.14;
	printf("Nikhil's project\n");
	printf("enter the radius of a circle\n");
	scanf("%f",&radius);
	perimeter=2*pi*radius;
	area=pi*radius*radius;
	printf("perimeter of circle: %f\n",perimeter);
	printf("area of circle: %f\n",area);
	getch;
}

