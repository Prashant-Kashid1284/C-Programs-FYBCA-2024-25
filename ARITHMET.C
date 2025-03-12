/*To Calculate Addition,Subtraction,Multiplication & Division of 2 Numbers using Function*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	void addition(int x,int y);
	void subtraction(int x,int y);
	void multiplication(int x,int y);
	void division(int x,int y);
	clrscr();
	printf("Enter Any Two Numbers\n");
	scanf("%d%d",&a,&b);
	addition(a,b);         //Function Calling
	subtraction(a,b);
	multiplication(a,b);
	division(a,b);
	getch();
}
void addition(int x,int y)
{
	int z;
	z=x+y;
	printf("Addition=%d\n",z);
}
void subtraction(int x,int y)
{
	printf("Subtraction=%d\n",x-y);
}
void multiplication(int x,int y)
{
	printf("Multiplication=%d\n",x*y);
}
void division(int x,int y)
{
	float z;
	z=(float)x/y;        //Target Data type
	printf("Division=%0.1f\n",z);
}