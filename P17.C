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
		for(c=a;c<=n-1;c++)
		{
			printf("\t",b);
		}
		for(b=1;b<=a;b++)
		{
			printf("%d\t",b);
		}
		for(d=a-1;d>=1;d--)
		{
			printf("%d\t",d);
		}
		printf("\n");
	}
	getch();
}