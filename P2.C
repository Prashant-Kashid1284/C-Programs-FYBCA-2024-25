/*To Generate Following Pattern for 'n' Lines using Nested Loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,n;
	clrscr();
	printf("Enter How Many Lines\n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)    	//initialization  //condition    //Increment
	{
		for(b=1;b<=a;b++)
		{
			printf("%d\t",a);
		}
		printf("\n");
	}
	getch();
}