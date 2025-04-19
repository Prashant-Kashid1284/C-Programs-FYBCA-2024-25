/*To Reverse a given String using SLF(Standard Library Functions)*/
#include<stdio.h>
#include<conio.h>
void main()          //String is a Collection of Characters
{                    //String is a Sequence of Characters(Array of Characters)
	char s[10];
	clrscr();                             //1)Integer 2)Float 3)Character
	printf("Enter a String Value\n");  //4)String (Number of Character)
	gets(s);    //scanf("%s",&a);    Welcome
	strrev(s);
	printf("Reverse String=%s\n",s);    //emocleW
	getch();
}