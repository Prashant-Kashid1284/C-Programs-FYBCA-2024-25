/*To Generate Following Pattern for 'n' Lines using Nested for Loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,n;
	char ch;
	clrscr();
	printf("Enter How Many Lines\n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)    	//initialization  //condition    //Increment
	{
		for(b=1,ch='A';b<=a;b++,ch++)
		{
			printf("%c%c\t",ch,ch+32);
		}
		printf("\n");
	}
	getch();
}