/*To Calculate sum of Fibonacci Series upto 'n'Terms*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int x=0,y=1,z,n,a;
	clrscr();
	printf("Enter How Many Terms\n");
	scanf("%d",&n);
	printf("Fibonacci Series\n");
	printf("%d\t%d\t",x,y);
	for(a=1;a<=n-2;a++)
	{
		z=x+y;
		printf("%d\t",z);
		x=y;
		y=z;
	}
	getch();
}

