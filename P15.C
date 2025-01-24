/*To Generate Following Pattern for 'n' Lines using Nested for Loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,n,sp=0;
	clrscr();
	printf("Enter How Many Lines\n");
	scanf("%d",&n);
	for(a=n;a>=1;a--)    	//initialization  //condition    //Increment
	{
		for(b=1;b<=a;b++)
		{
			printf("*\t");
		}
		for(c=1;c<=sp;c++)
		{
			printf("\t");    //press tab 2 times
		}
		for(d=a;d>=1;d--)
		{
			printf("*\t");
		}
		printf("\n");
		sp=sp+2;
	}
	getch();
}