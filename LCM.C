/*To Find LCM(Least Common Multiplier) of Two Numbers*/
#include<stdio.h>
void main()
{
	int x,y,lcm,max,a;
	clrscr();
	printf("Enter Any Two Numbers\n");
	scanf("%d%d",&x,&y);
	max=(x>y)?x:y;
	for(a=max;a<=x*y;a++)
	{
		if(a%x==0 && a%y==0)
		{
			lcm=a;
			break;
		}
	}
	printf("LCM of %d and %d Number=%d\n",x,y,lcm);
	getch();
}