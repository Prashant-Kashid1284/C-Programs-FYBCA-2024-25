/*To Calculate Factorial of a given Number using pointer*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,f=1,n,*p;
	clrscr();
	printf("Enter any Number\n");
	scanf("%d",&n);
	p=&n;
	for(a=1;a<=*p;a++)
	{
		f=f*a;
	}
	printf("Factorial=%d\n",f);
	getch();
}