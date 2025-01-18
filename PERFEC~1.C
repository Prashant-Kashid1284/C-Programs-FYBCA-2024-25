/*To Find Perfect Number InBetween 1 to GIven Range*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,sum,range;
	clrscr();
	printf("Enter a Range(Limit)\n");
	scanf("%d",&range);
	printf("Perfect Numbers InBetween 1 to %d Number\n",range);
	for(n=1;n<=range;n++)
	{
		sum=0;
		a=1;
		while(a<n)
		{
			if(n%a==0)
			{
				sum=sum+a;
			}
			a++;
		}
		if(sum==n)
		{
			printf("%d\n",n);
		}
	}
	getch();
}