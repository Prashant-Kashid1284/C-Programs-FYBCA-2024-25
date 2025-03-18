/*To Calculate Circumference of Circle using Function*/
#include<stdio.h>
#define PI 3.14
#define CALC(x) 2*PI*x
void main()
{
	float a,r;
	clrscr();
	printf("Enter a Radius\n");
	scanf("%f",&r);
	printf("Circumference of Circle=%0.2f\n",CALC(r));
	getch();
}