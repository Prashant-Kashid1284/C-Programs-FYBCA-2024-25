/*To Calculate Sum of digits of a given Number using Function*/
#include<stdio.h>
void main()
{
	int n,sum;
	int sumofdigit(int x);
	clrscr();
	printf("Enter any Number\n");
	scanf("%d",&n);
	sum=sumofdigit(n);
	printf("Sum of Digit of %d=%d\n",n,sum);
	getch();
}
int sumofdigit(int x)
{
	int r,sum=0;
	while(x>0)
	{
		r=x%10;
		sum=sum+r;
		x=x/10;
	}
	return sum;
}
