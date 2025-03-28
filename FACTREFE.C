/*To Calculate Factorial of a given Number Using Call By Refrence without Return Type*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int f,n;
	void factorial(int *p);
	clrscr();
	printf("enter any number\n");
	scanf("%d",&n);
	factorial(&n);	//Call By Reference
	getch();
}
void factorial(int *p)
{
	int a,f=1;
	for (a=1;a<=*p;a++)
	{
		f=f*a;
	}
	printf("factorial=%d\n",f);
}