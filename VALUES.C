/*C Program to display Current Date,Time & Name of Fileusing predefined Macros*/
#include<stdio.h>
void main()
{                                                 //ASCII  A=65,B=66,C=67
	int a=50;                                 //Z=90,a=97,b=98....z=122
	float b=78.2;
	char c='h';
	char s[20]="Good Morning";
	clrscr();                                   //Format Specifier
	printf("Integer Number=%d\n",a);            //%d %f %c %s   %ld
	printf("Float Number=%0.2f\n",b);
	printf("Character Value=%d\n",c);
	printf("String Value=%s\n",s);
	getch();
}