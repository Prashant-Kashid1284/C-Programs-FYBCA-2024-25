/*To Calculate Factorial of a given Number Using Pointer Function*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int f,n;
	int factorial(int *p);
	int (*ptr)(int *p);
	clrscr();
	ptr=factorial;
	printf("Enter any Number\n");
	scanf("%d",&n);
	f=ptr(&n);
	printf("Factorial=%d\n",f);
	getch();
}
int factorial(int *p)
{
	int f=1,a;
	for(a=1;a<=*p;a++)
	{
		f=f*a;
	}
	return f;
}
