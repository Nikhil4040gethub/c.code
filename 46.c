#include<stdio.h>
int main()
{
printf ("Nikhil's project\n");
int a=0;
void sqr(int);
for (a=1;a<=5;a++)
sqr(a);
return 0;
}
void sqr(int b)
{
printf("square of number%d\n",b*b);
}