/*To Search given substring in a string using SLF*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{	char s[20],sb[10],*p;

	printf("Enter a String\n");
	gets(s);                //Welcome
	printf("Enter a substring\n");         //A-Z(65-90) a-z(97-122)
	gets(sb);           //elc
	p=strstr(s,sb);//if substring is found/Present/search then return address
	if(p)	//if substring is not found in string then return NULL Address
	{
		printf("%s Substring is Search\n",sb);
	}
	else
	{	printf("%s substring is Not Search\n",sb);
	}
	getch();
}