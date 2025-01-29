/*To Calculate Addition of 2 Numbers using Function*/
#include<stdio.h>
void main()
{
	int a,b,c;
	void addition(int x,int y);
	clrscr();
	printf("Enter Any Two Numbers\n");
	scanf("%d%d",&a,&b);
	addition(a,b);
	getch();
}
void addition(int x,int y)
{
	int z;
	z=x+y;
	printf("Addition=%d\n",z);
}
