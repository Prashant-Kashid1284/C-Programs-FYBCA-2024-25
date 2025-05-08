/*To Reverse a given string without using SLF[using Function]*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char s[20];
	void stringreverse(char x[]);
	clrscr();
	printf("Enter a String\n");
	gets(s);     //Welcome
	stringreverse(s);
	getch();
}
void stringreverse(char x[])
{
	char t;
	int start=0,end,i=0;
	while(x[i]!='\0'){i++;}
	end=i-1;
	while(start<end)
	{
		t=x[start];
		x[start]=x[end];
		x[end]=t;
		start++;
		end--;
	}
	printf("String Reverse=%s\n",x);
}












