/*To Calculate Area of Circle*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	float a,r;
	clrscr();
	printf("Enter a Radius\n");
	scanf("%f",&r);
	a=PI*r*r;
	printf("Area of Circle=%0.2f\n",a);
	getch();
}