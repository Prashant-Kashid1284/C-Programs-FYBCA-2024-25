/*To set(replace) all character with '*'symbol using SLF*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()          //String is a Collection of Characters
{                    //String is a Sequence of Characters(Array of Characters)
	char s[10];
	clrscr();
	printf("Enter a String Value\n");
	gets(s);    //scanf("%s",&a);    Welcome BCA
	strset(s,'*');
	printf("String Value=%s\n",s); //***********
	getch();
}