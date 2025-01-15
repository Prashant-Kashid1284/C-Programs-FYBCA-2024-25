/*To Check Whether given Number is Palindrome or Not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,rev=0,n,p;
	clrscr();
	printf("Enter Any Number\n");
	scanf("%d",&n);
	p=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("Reverse=%d\n",rev);
	if(rev==p)
	{
		printf("%d Number is Palindrome\n",p);
	}
	else
	{
		printf("%d Number is Not Palindrome\n",p);
	}
	getch();
}
