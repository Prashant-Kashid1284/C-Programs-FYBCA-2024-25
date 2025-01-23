/*To Generate Following Pattern for 'n' Lines using Nested Loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,n;
	clrscr();
	printf("Enter How Many Lines\n");
	scanf("%d",&n);
	for(a=n;a>=1;a--)    	//initialization  //condition    //Increment
	{
		for(b=a;b<=n;b++)
		{
			printf("%d\t",b);
		}
		printf("\n");
	}
	getch();
}