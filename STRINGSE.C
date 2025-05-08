/*To First Number of Character Set(replace) with '$' symbol using SLF*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s[20];
	int n;
	clrscr();
	printf("Enter a String\n");
	gets(s);     //Welcome
	printf("Enter Number of Charcters\n");
	scanf("%d",&n);  //n=4
	strnset(s,'*',n);
	printf("String=%s\n",s);  //$$$$ome
	getch();
}