/*To Calculate sum of 1 to N Numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,sum=0,n;
	clrscr();
	printf("Enter a Range\n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		printf("%d\n",a);
		sum=sum+a;
	}
	printf("sum of 1 to %d Number=%d\n",n,sum);
	getch();
}
