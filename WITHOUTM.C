/*To Calculate Multiplication of Two Number without using '*'Operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int x=0,y=1,z=0,a;
	clrscr();
	printf("Enter Any Two Numbers\n");
	scanf("%d%d",&x,&y);
	for(a=1;a<=y;a++)
	{
		z=z+x;
	}
	printf("Multiplication=%d\n",z);
	getch();
}