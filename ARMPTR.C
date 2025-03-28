/* To check whether given number is armstrong or not(Using Pointer)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,sum=0,n,m;
	int *p=&n;
	clrscr();
	printf("enter any number\n");
	scanf("%d",&n);
	m=*p;
	while(*p>0)
	{
		r=*p%10;
		sum=sum+r*r*r;
		*p=*p/10;
	 }
	 printf("sum of cube=%d\n",sum);
	 if(sum==m)
	 {
		printf("%d number is armstrong\n",m);
	 }
	 else
	 {
		printf("%d number is not armstrong\n",m);
	 }
	 getch();
}