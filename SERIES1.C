/*To Calculate sum of Following Series upto 'n' Terms*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,n,f,sum=0;
	clrscr();
	printf("Enter a Range\n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		f=1;
		for(b=1;b<=a;b++)
		{
			f=f*b;
		}
		sum=sum+f;
	}
	printf("Sum of Series=%d\n",sum);
	getch();
}
