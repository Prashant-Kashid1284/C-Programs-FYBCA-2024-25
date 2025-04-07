/* To check whether given number is prime or not(Using Pointer Function)*/
#include<stdio.h>
void main()
{	int flag,n;
	int prime(int *p);
	int (*ptrprime)(int *p);
	clrscr();
	printf("Enter any number\n");
	scanf("%d",&n);       //n=153
	ptrprime=prime;
	flag=(*ptrprime)(&n);  //Call By Reference
	if(flag==1)
	{
		printf("%d number is Prime\n",n);
	}
	else
	{
		printf("%d number is not Prime\n",n);
	}
	getch();
}
int prime(int *p)
{
	int a,flag=1;
	a=2;
	while(a<*p)
	{
		if(*p%a==0)
		{
			flag=0;
			break;
		}
		a++;
	 }
	 return flag;
}



