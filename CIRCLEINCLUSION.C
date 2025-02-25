/*Example of Preprocessor(Area of Circle)*/
#include<stdio.h>            //File Inclusion Directive
#include<conio.h>
#include "area.c"	     //File Inclusion Directive
void main()
{
	float r,a;
	float area(float t);
	clrscr();
	printf("Enter  a radius\n");
	scanf("%f",&r);         //r=2.5
	a=area(r);		//Function Calling(Passing argument)
	printf("Area of Circle=%0.2f\n",a);
	getch();
}
		
			area.c

#define PI 3.14
float area(float t)  //t Received value of r
{                          //t=2.5                         //Function Defination
	float y;
	y=PI*t*t;   			//Macro Expansion means replace macro name with its code
	return y;
}
