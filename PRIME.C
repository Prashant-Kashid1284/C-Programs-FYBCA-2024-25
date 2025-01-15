/*To Check whether given number is Prime or Not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,flag=1;
	clrscr();
	printf("Enter Any Number\n");
	scanf("%d",&n);
	a=2;
	while(a<n)
	{
		if(n%a==0)
		{
			flag=0;
			break;
		}
		a++;
	}
	if(flag==1)
	{
		printf("%d Number is Prime\n",n);
	}
	else
	{
		printf("%d Number is Not Prime\n",n);

	}
	getch();
}







