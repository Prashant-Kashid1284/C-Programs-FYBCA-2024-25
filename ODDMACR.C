/*To Check whether given number is Odd or Even using Macro*/
#include<stdio.h>
#include<conio.h>
#define CHECK(x) x%2==0?printf("%d Number is Even\n",x):printf("%d Number is Odd\n",x)
void main()
{
	int n;
	clrscr();
	printf("Enter Any Number\n");
	scanf("%d",&n);
	CHECK(n);
	getch();
}