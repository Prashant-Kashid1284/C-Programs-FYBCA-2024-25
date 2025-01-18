/*To Convert Temperature in Fahrenheit to Celsius*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	clrscr();
	printf("Enter a Temperature in Fahrenheit\n");
	scanf("%f",&f);
	c=0.56*(f-32);
	printf("Temperature in Celsius=%0.2f\n",c);
	getch();
}