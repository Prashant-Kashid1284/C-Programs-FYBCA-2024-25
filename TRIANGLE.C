/*To Calculate Area of Triangle*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,h;
	clrscr();
	printf("Enter a Base & Height of Triangle\n");
	scanf("%f%f",&b,&h);
	a=0.5*b*h;
	printf("Area of Triangle=%0.2f\n",a);
	getch();
}