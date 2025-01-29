/*To Calculate Addition of 2 Numbers using Function*/
#include<stdio.h>
void main()
{
	int a,b,c;
	int addition(int x,int y);
	clrscr();
	printf("Enter Any Two Numbers\n");
	scanf("%d%d",&a,&b);
	c=addition(a,b);
	printf("Addition=%d\n",c);
	getch();
}
int addition(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
