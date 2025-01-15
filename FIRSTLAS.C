/*To Calculate sum of First & Last Digit of a given Number*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,first,last,sum,n;
	clrscr();
	printf("Enter Any Number\n");
	scanf("%d",&n);
	last=n%10;
	while(n>0)
	{
		r=n%10;
		n=n/10;
	}
	first=r;
	sum=first+last;
	printf("Sum of First & Last=%d\n",sum);
	getch();
}