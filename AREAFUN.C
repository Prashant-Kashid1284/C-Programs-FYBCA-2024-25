/*To Calculate Area of Circle using Function*/
#include<stdio.h>
#define PI 3.14
void main()
{
	float a,r;
	float area(float r);
	clrscr();
	printf("Enter a Radius\n");
	scanf("%f",&r);
	a=area(r);
	printf("Area of Circle=%0.2f\n",a);
	getch();
}
float area(float r)
{
	float ar;
	ar=PI*r*r;
	return ar;
}