/*To Concatenation(join) one string at the end of another string using SLF*/
#include<stdio.h>                             //Standard Library Functions
#include<conio.h>
#include<string.h>
void main()          //String is a Collection of Characters
{                    //String is a Sequence of Characters(Array of Characters)
	char s1[30],s2[30];
	clrscr();
	printf("Enter a First String\n");
	gets(s1);	      //Welcome BCA
	printf("Enter a Second String\n");
	gets(s2);	      //Good Afternoon
	strcat(s2,s1);         //join s1 string at the end of s2
	printf("First String Value=");
	puts(s1);          //Welcome BCA
	printf("Second String Value=%s\n",s2);
	//Good AfternoonWelcome BCA
	getch();
}