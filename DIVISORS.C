/*To Print Factors(Divisors) of a given Number*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n;
	clrscr();
	printf("Enter Any Number\n");
	scanf("%d",&n);
	printf("Divisors of %d Number is\n",n);
	a=1;
	while(a<=n)
	{
		if(n%a==0)
		{
			printf("%d\n",a);
		}
		a++;
	}
	getch();
}



