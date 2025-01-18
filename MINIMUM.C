/*To find Minimum of Two Numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("Enter Any Two Numbers\n");
	scanf("%d%d",&x,&y);
	if(x<y)
	{
		printf("Minimum=%d\n",x);
	}
	else
	{
		printf("Minimum=%d\n",y);
	}
	getch();
}