/*To Calculate Factorial of a given Number Using Call By Refrence with Return Type*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int f,n;
	int factorial(int *p);
	clrscr();
	printf("enter any number\n");
	scanf("%d",&n);
	f=factorial(&n);	//Call By Reference
	printf("factorial=%d\n",f);
	getch();
}
int factorial(int *p)
{
	int a,f=1;
	for (a=1;a<=*p;a++)
	{
		f=f*a;
	}
	return f;
}