/*To Search given Character from First Occurrence in a string using SLF*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{	char s[20],ch,*p;
	clrscr();
	printf("Enter a String\n");
	gets(s);                //Welcome
	printf("Enter a character\n");         //A-Z(65-90) a-z(97-122)
	ch=getchar();           //e
	p=strchr(s,ch);//if character is found/Presen then return address
	if(p)//if charcter is not found in string then return NULL Address
	{
		printf("%c Charcter is Search\n",ch);
	}
	else
	{	printf("%c Charcter is Not Search\n",ch);
	}
	getch();
}