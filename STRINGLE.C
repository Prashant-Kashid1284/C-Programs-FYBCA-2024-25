/*To Calculate Length(No.of Characters) of a given String Without Using SLF*/
#include<stdio.h>                                          //(Using Function)
#include<conio.h>
void main()
{	char s[20];	int i;
	int length(char x[]);	//function declaration
	clrscr();
	printf("Enter a String\n");
	gets(s);          //Good Morning
	i=length(s);      //user defined function calling
	printf("Length of string=%d\n",i);
	getch();
}
int length(char x[])                 //Function Defination
{	int j=0;
	while(x[j]!='\0')
	{
		j++;
	}
	return j;
}
