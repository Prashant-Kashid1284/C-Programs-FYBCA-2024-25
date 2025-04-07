/* To check whether given number is armstrong or not(Using Pointer Function)*/
#include<stdio.h>
void main()
{	int sum,n;
	int armstrong(int x);
	int (*ptrarm)(int x);
	clrscr();
	printf("enter any number\n");
	scanf("%d",&n);     //n=153
	ptrarm=armstrong; //ptrarm points to the address of armstrong function
	sum=(*ptrarm)(n);   //Call By Value
	if(sum==n)
	{
		printf("%d number is armstrong\n",n);
	}
	else
	{
		printf("%d number is not armstrong\n",n);
	}
	getch();
}
int armstrong(int x)
{
	int r,sum=0;
	while(x>0)
	{
		r=x%10;
		sum=sum+r*r*r;
		x=x/10;
	 }
	 printf("sum of cube=%d\n",sum);
	 return sum;
}



