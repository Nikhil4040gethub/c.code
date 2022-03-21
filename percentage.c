#include<stdio.h>
#include<conio.h>
void main()
{
	float eng,maths,sci,sst,gk;
	float total,per,avg;
	printf("Nikhil's project\n");
	printf("enter marks of five subjects : \n");
	scanf("%f %f %f %f %f",&eng,&maths,&sci,&sst,&gk);
	total=eng+maths+sci+sst+gk;
	per=(total/500)*100;
	avg=total/5.0;
	printf("Total marks : %.2f\n",total);
	printf("percentage : %.2f\n",per);
	printf("average : %.2f\n",avg);
	getch();
}
