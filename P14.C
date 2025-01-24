/*To Generate Following Pattern for 'n' Lines using Nested for Loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,n,sp=0;
	char c1,c2;
	clrscr();
	printf("Enter How Many Lines\n");
	scanf("%d",&n);
	for(a=n;a>=1;a--)    	//initialization  //condition    //Increment
	{
		for(b=1,c1='A';b<=a;b++,c1++)
		{
			printf("%c ",c1);
		}
		for(c=1;c<=sp;c++)
		{
			printf("  ");
		}
		for(d=a,c2=c1-1;d>=1;d--,c2--)
		{
			printf("%c ",c2);
		}
		printf("\n");
		sp=sp+2;
	}
	getch();
}