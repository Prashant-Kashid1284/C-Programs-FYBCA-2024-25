/*To Copy one String into another string using SLF*/
#include<stdio.h>                             //Standard Library Functions
#include<conio.h>
#include<string.h>
void main()          //String is a Collection of Characters
{                    //String is a Sequence of Characters(Array of Characters)
	char s1[20],s2[20];
	clrscr();
	printf("Enter a String Value\n");
	gets(s1);	      //Welcome BCA
	strcpy(s2,s1);  //Can not copy using '=' operator(s2=s1)//Source(s1)
	printf("Original String Value=");
	puts(s1);          //printf("String Value of s=%s\n",s);    //Welcome
	printf("Copied String=%s\n",s2);
	getch();
}