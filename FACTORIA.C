/*To Calculate Factorial of a given Number using for Loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,f=1,n;
	clrscr();
	printf("Enter any Number\n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		f=f*a;
	}
	printf("Factorial=%d\n",f);
	getch();
}

