/*To Copy Number of Characters in one String to another string using SLF*/
#include<stdio.h>                             //Standard Library Functions
#include<conio.h>
#include<string.h>
void main()          //String is a Collection of Characters
{                    //String is a Sequence of Characters(Array of Characters)
	char s1[20],s2[20];
	clrscr();
	printf("Enter a String Value\n");
	gets(s1);	      //Welcome BCA
	strncpy(s2,s1,4);  //copy first 4 characters of s1 into s2
	printf("Original String Value=");
	puts(s1);          //printf("String Value of s=%s\n",s);    //Welcome
	printf("Copied String=%s\n",s2);                            //Welc
	getch();
}