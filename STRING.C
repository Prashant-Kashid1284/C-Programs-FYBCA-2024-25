/*To Accept & Display string using gets() and puts() function*/
#include<stdio.h>
#include<conio.h>
void main()          //String is a Collection of Characters
{                    //String is a Sequence of Characters(Array of Characters)
	char s[10];
	clrscr();                             //1)Integer 2)Float 3)Character
	printf("Enter a String Value\n");  //4)String (Number of Character)
	gets(s);	     //scanf("%s",&a);    //Welcome BCA
	printf("String Value=");
	puts(s);          //printf("String Value of s=%s\n",s);    //Welcome
	getch();
}