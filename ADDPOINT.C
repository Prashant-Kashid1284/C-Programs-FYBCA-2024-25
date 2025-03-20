/*To Calculate Addition of 2 Numbers using pointer*/
#include<stdio.h>
#include<conio.h>
#pragma warning(disable:6)
void main()
{
	int a,b,c,*p,*q,d=0;
	clrscr();
	printf("Enter any 2 Numbers\n");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	c=*p+*q;
	printf("Addition=%d\n",c);
	getch();
}