/*To Calculate Factorial of a given Number using Command Line Argument*/
#include<stdio.h>
#include<stdlib.h>
void main(int x,char *y[])
{
	long int a,n,f=1;
	clrscr();
	if(x!=2)
	{
		printf("Wrong Arguments\n");
		exit(0);
	}
	n=atol(y[1]);
	for(a=1;a<=n;a++)
	{
		f=f*a;
	}
	printf("Factorial=%ld\n",f);
	getch();
}