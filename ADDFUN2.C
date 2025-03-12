/*To Calculate Addition,Subtraction,Multiplication & Division of 2 Numbers using Function*/
#include<stdio.h>
#include<conio.h>
void addition(int s,int t)
{
	printf("Addition=%d\n",s+t);
}
void addition(float s,float t)
{
	printf("Addition=%f\n",s+t);
}
void addition(int s,float t)
{
	printf("Addition=%f\n",s+t);
}
void addition(float s,int t)
{
	printf("Addition=%f\n",s+t);
}
void main()
{
	int a=50,b=30;
	float m=70.3,n=20.4;
	void addition(int s,int t);//Function Declaration
	void addition(float s,float t);
	void addition(int s,float t);
	void addition(float s,int t);
	clrscr();
	addition(a,b);         //Addition=80   //Function Calling
	addition(m,n);         //Addition=90.7
	addition(a,m);         //Addition=120.3
	addition(n,b);         //Addition=50.4
	getch();
}








