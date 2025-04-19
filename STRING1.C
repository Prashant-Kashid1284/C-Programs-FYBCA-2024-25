/*To Accept & Display string using gets(),puts() function*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()          //String is a Collection of Characters
{                    //String is a Sequence of Characters(Array of Characters)
	char s[50];
	int n;
	clrscr();                             //1)Integer 2)Float 3)Character
	printf("Enter a String Value\n");  //4)String (Number of Character)
	gets(s);    //scanf("%s",&s);    Welcome BCA

	printf("Value of a=%s\n",s);     //Value of a=Welcome BCA
	puts(s);                         //Welcome BCA
	n=strlen(s);
	printf("Length(No. of Characters) of String=%d\n",n); //Length=11
	printf("Reverse of String=%s\n",strrev(s)); //Reverse=ACB emocleW
	getch();
}