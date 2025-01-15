/*To Calculate sum of Factors(Divisors) of a given Number*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,sum=0;
	clrscr();
	printf("Enter Any Number\n");
	scanf("%d",&n);
	printf("Divisors of %d Number is\n",n);
	a=1;
	while(a<=n)
	{
		if(n%a==0)
		{
			sum=sum+a;
			printf("%d\n",a);
		}
		a++;
	}
	printf("Sum of Divisors of %d Number is=%d\n",n,sum);
	getch();
}

