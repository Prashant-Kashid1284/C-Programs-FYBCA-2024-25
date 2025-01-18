/*To Swapping of Two Numbers using Third Variable*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,t;
	clrscr();
	printf("Enter Any Two Numbers\n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Value of a=%d\n",a);
	printf("Value of a=%d\n",b);
	getch();
}