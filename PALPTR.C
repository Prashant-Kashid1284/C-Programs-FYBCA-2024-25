/* To check whether given number is palindrome or not(Using Pointer)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,rev=0,n,p,*ptr;   //Pointer Declaration
	clrscr();
	printf("enter any number\n");
	scanf("%d",&n);
	ptr=&n;    //Pointer Defination
	p=*ptr;
	while(*ptr>0)
	{
		r=*ptr%10;
		rev=rev*10+r;
		*ptr=*ptr/10;
	}
	printf("Reverse =%d\n",rev);
	if(rev==p)
	{
		printf("%d Number is Palindrome\n",p);
	}
	else
	{
		printf("%d Number is not Palindrome \n",p);
	}
	getch();
}

