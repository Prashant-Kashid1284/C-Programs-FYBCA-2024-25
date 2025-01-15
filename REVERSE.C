/*To Calculate Reverse of a given Number*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,rev=0,n;
	clrscr();
	printf("Enter Any Number\n");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("Reverse=%d\n",rev);
	getch();
}

