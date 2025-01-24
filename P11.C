/*To Generate Following Pattern for 'n' Lines using Nested for Loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,n;
	clrscr();
	printf("Enter How Many Lines\n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)    	//initialization  //condition    //Increment
	{
		for(b=1;b<=a;b++)
		{
			printf("%d\t",b);
		}
		printf("\n");
	}
	for(c=n;c>=1;c--)    	//initialization  //condition    //Increment
	{
		for(d=1;d<=c;d++)
		{
			printf("%d\t",d);
		}
		printf("\n");
	}
	getch();
}