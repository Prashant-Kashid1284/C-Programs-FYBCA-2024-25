/*To Calculate x to Power of y without using pow() Function*/
#include<stdio.h>
void main()
{
	int a,y;
	float x,p=1;
	clrscr();
	printf("Enter a Value of x and y\n");
	scanf("%f%d",&x,&y);
	for(a=1;a<=y;a++)
	{
		p=p*x;
	}
	printf("Power=%0.2f\n",p);
	getch();
}