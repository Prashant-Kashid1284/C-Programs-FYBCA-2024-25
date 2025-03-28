/* To Calculate sum of digits of a given Number using Pointer*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,sum=0,n,*p=&n;
	clrscr();
	printf("enter any number\n");
	scanf("%d",&n); //n=8495
	while(*p>0)  //*p--*1001(Value of Address)---8495>0 T
	{
		r=*p%10;
		sum=sum+r;
		*p=*p/10;
	}
	printf("Sum of Digits=%d\n",sum);
	getch();
}