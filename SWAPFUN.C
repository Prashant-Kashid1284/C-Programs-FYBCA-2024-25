/*To Swapping of 2 Numbers using Function*/
#include<stdio.h>
void main()
{
	int a,b;
	void swap(int x,int y);
	clrscr();
	printf("Enter Any Two Numbers\n");
	scanf("%d%d",&a,&b);
	swap(a,b);
	getch();
}
void swap(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	printf("Value of a=%d\n",x);
	printf("Value of b=%d\n",y);
}