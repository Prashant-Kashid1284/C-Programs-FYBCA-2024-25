/*To Calculate Length(No.of Characters) of a given String Without Using SLF(Using Pointer)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char s[20],*p;
	int i=0;
	int length(char x[]);	//function declaration
	clrscr();
	printf("Enter a String\n");
	gets(s);          //Good Morning
	p=&s[0];          //p=s;   string using Pointer
	while(*(p+i)!='\0')
	{    //s[i]
		i++;
	}
	printf("Length of string=%d\n",i);
	getch();
}