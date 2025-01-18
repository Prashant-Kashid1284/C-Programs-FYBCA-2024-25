/*To Calculate sum of digits of a given Number till it reduces single digit*/
#include<stdio.h>
void main()
{
	int r,n,sum;
	printf("Enter any Number\n");
	scanf("%d",&n);
	X:
	sum=0;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	if(sum>9)
	{
		printf("Sum of Digit=%d\n",sum);
		n=sum;
		goto X;
	}
	printf("Sum of Digit till it reduces Single Digit=%d\n",sum);
	getch();
}

