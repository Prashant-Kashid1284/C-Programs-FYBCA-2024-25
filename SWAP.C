/*To Interchange(Swapping) of Two Numbers using Function(without Return Type)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	void swap(int x,int y);
	clrscr();
	printf("enter any no\n");
	scanf("%d%d",&a,&b);
	swap(a,b);		//Function Calling
	getch();
}
void swap(int x,int y) //x received value of a,y received value of b
{
	int t;
	t=x;
	x=y;
	y=t;
	printf("value of a=%d\n",x);
	printf("value of b=%d\n",y);
}