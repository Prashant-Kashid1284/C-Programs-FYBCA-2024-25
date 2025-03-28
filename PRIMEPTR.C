/* To Check Whether given Number is Prime or Not(Pointer)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,flag=1,n,*p;
	clrscr();
	printf("enter any number\n");
	scanf("%d",&n);
	p=&n;          //Pointer Variable
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
	 if(flag==1)
	 {
		printf("Given Number %d is Prime\n",*p);
	 }
	 else
	 {
		 printf("Given Number %d is Not Prime\n",*p);
	 }
	 getch();
}