/*To find Maximum of Two Numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("Enter Any Two Numbers\n");
	scanf("%d%d",&x,&y);
	if(x>y)
	{
		printf("Maximum=%d\n",x);
	}
	else
	{
		printf("Maximum=%d\n",y);
	}
	getch();
}