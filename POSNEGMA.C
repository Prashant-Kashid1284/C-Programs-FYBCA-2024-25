/*To Check whether given number is Positive,Negative or Zero using Macro*/
#include<stdio.h>
#include<conio.h>
#define POSNEG(x) x==0?printf("%d Number is Zero\n",x):x>0?printf("%d Number is Positive\n",x):printf("%d Number is Negative\n",x)
void main()
{
	int n;
	clrscr();
	printf("Enter Any Number\n");
	scanf("%d",&n);
	POSNEG(n);
	getch();
}