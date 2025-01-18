/*To Calculate Area of Square*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float a,side;
	clrscr();
	printf("Enter a Side of Square\n");
	scanf("%f",&side);
	a=side*side;
	printf("Area of Square=%0.2f\n",a);
	getch();
}