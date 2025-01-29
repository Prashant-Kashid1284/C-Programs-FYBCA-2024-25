/*To Calculate Factorial of a given Number using Function*/
#include<stdio.h>
void main()
{
	int n,f;
	int factorial(int x);
	clrscr();
	printf("Enter any Number\n");
	scanf("%d",&n);
	f=factorial(n);
	printf("factorial of %d=%d\n",n,f);
	getch();
}
int factorial(int x)
{
	int a,f=1;
	for(a=1;a<=x;a++)
	{
		f=f*a;
	}
	return f;
}
