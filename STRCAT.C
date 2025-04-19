/*To Concatenation(join) Number of Character in one string at the
end of another string using SLF(Standard Library Functions)*/
#include<stdio.h>
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
	strncat(s1,s2,6);  //join 6 characters of s2 string at the end of s1
	printf("First String Value=");
	puts(s1);          //Welcome BCAGood A
	printf("Second String Value=%s\n",s2); //Good Afternoon
	getch();
}