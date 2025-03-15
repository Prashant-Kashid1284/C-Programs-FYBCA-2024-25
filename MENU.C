/*Menu Driven Program using C for Prime and Perfect Number or Not(Using FUnction)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,ch;
	void prime(int x);
	void perfect(int x);
	clrscr();
	printf("Enter any NUmber\n");
	scanf("%d",&n);
	printf("Menu Driven Program Using C\n");
	do
	{
		printf("Menu Includes\n");
		printf("1:Prime\n");
		printf("2:Perfect\n");
		printf("0:Exit\n");
		printf("Enter Your Choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	prime(n);
				break;
			case 2:	perfect(n);
				break;
			case 0:	exit(0);
			default:printf("Wrong Choice\n");
		}
	}while(ch!=0);
	getch();
}
void perfect(int x)
{
	int a,sum=0;
	a=1;
	while(a<x)
	{
		if(x%a==0)
		{
			sum=sum+a;
		}
		a++;
	}
	if(sum==x)
	{
		printf("%d Number is Perfect\n",x);
	}
	else
	{
		printf("%d Number is Not Perfect\n",x);
	}
}
void prime(int x)
{
	int a,flag=1;
	a=1;
	while(a<x)
	{
		if(x%a==0)
		{
			flag=0;
			break;
		}
		a++;
	}
	if(flag==1)
	{
		printf("%d Number is Prime\n",x);
	}
	else
	{
		printf("%d Number is Not Prime\n",x);
	}
}