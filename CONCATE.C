/*To Concatenate(Join) Number of Character of one String at the end of Another String Using SLF*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20];
	int n;
	clrscr();
	printf("Enter a First String\n");
	gets(s1);                //Welcome
	printf("Enter a Second String\n");
	gets(s2);               //Computer
	printf("Enter How many Characters to be Join\n");
	scanf("%d",&n);
	strncat(s1,s2,n);         //WelcomeCompu
	printf("Concatenation of String=%s\n",s1);   //WelcomeCompu
	printf("Second String=%s\n",s2);	     //Computer
	getch();
}