/*To Calculate Length(Number of Characters) of a given String using SLF*/
#include<stdio.h>                             //Standard Library Functions
#include<conio.h>
#include<string.h>
void main()          //String is a Collection of Characters
{                    //String is a Sequence of Characters(Array of Characters)
	char s[10];
	int n;
	clrscr();                             //1)Integer 2)Float 3)Character
	printf("Enter a String Value\n");  //4)String (Number of Character)
	gets(s);	     //scanf("%s",&a);    //Welcome BCA
	n=strlen(s);
	printf("String Value=");
	puts(s);          //printf("String Value of s=%s\n",s);    //Welcome
	printf("Number of Characters=%d\n",n);
	getch();
}