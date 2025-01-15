/*To Calculate Sum of digits of a given Number*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,sum=0,n;
	clrscr();
	printf("Enter Any Number\n");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("Sum of digits=%d\n",sum);
	getch();
}