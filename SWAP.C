/*To Swapping of Two Numbers using Third Variable*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,t;
	clrscr();
	printf("Enter Any Two Numbers\n");
	scanf("%d%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("Value of a=%d\n",a);
	printf("Value of a=%d\n",b);
	getch();
}