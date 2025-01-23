/*To Generate Following Pattern for 'n' Lines using Nested for Loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,n,c;
	clrscr();
	printf("Enter How Many Lines\n");
	scanf("%d",&n);
	printf("Pascal Triangle\n");
	for(a=1;a<=n;a++)    	//initialization  //condition    //Increment
	{
		for(c=a;c<=n-1;c++)
		{
			printf(" ");
		}
		for(b=1;b<=a;b++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}