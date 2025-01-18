/*To Check Whether given Number is Strong or Not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,sum=0,n,s,a,f;
	clrscr();
	printf("Enter Any Number\n");
	scanf("%d",&n);
	s=n;
	while(n>0)
	{
		r=n%10;
		f=1;
		for(a=1;a<=r;a++)
		{
			f=f*a;
		}
		sum=sum+f;
		n=n/10;
	}
	printf("Sum of Factorial of each digit=%d\n",sum);
	if(sum==s)
	{
		printf("%d Number is strong\n",s);
	}
	else
	{
		printf("%d Number is Not strong\n",s);
	}
	getch();
}