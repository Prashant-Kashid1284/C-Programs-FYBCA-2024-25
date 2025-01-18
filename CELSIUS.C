/*To Convert Temperature in Celsius to Fahrenheit*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	clrscr();
	printf("Enter a Temperature in Celsius\n");
	scanf("%f",&c);
	f=1.8*c+32;
	printf("Temperature in Fahrenheit=%0.2f\n",f);
	getch();
}