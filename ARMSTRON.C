/*To Check Whether given Number is Armstrong or Not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,sum=0,n,m;
	clrscr();
	printf("Enter Any Number\n");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	printf("Sum of Cube=%d\n",sum);
	if(sum==m)
	{
		printf("%d Number is Armstrong\n",m);
	}
	else
	{
		printf("%d Number is Not Armstrong\n",m);
	}
	getch();
}






