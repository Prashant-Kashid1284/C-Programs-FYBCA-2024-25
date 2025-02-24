/*Example of Preprocessor(Area of Circle)*/
#include<stdio.h>            //File Inclusion Directive
#include<conio.h>
#define PI 3.14              //Macro Substitution Directive(Simple Macro)
void main()
{
	float r,a;
	clrscr();
	printf("Enter  a radius\n");
	scanf("%f",&r);
	a=PI*r*r;        //Macro Expansion means replace macro name with its code
	printf("Area of Circle=%0.2f\n",a);
	getch();
}