/*To Convert UppperCase into LowerCase String using SLF(Standard Library Functions)*/
#include<stdio.h>
#include<conio.h>
void main()          //String is a Collection of Characters
{                    //String is a Sequence of Characters(Array of Characters)
	char s[10];
	clrscr();
	printf("Enter a Lowercase String\n");
	gets(s);    //welcome
	strupr(s);       //
	printf("String UpperCase=%s\n",s);    //WELCOME
	getch();
}