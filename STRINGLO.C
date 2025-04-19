/*To Convert UppperCase into LowerCase String using SLF*/
#include<stdio.h>                         //(Standard Library Functions)
#include<conio.h>
void main()          //String is a Collection of Characters
{                    //String is a Sequence of Characters(Array of Characters)
	char s[10];
	clrscr();
	printf("Enter a UpperCsase String\n");
	gets(s);    //WELCOME
	strlwr(s);       //
	printf("String Lowercase=%s\n",s);    //welcome
	getch();
}