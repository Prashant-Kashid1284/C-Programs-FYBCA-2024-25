/*Sub-Functions with Arguments & Returning Value within main() function*/
#include<stdio.h>
void main()
{
	int n;
	int fun1(int);
	int fun2(int);
	int fun3(int);
	clrscr();

	n=fun1(10);          //function Calling in main() with Arguments
	printf("Fun1() Function Return Value=%d\n",n);
	n=fun2(20);
	printf("Fun2() Function Return Value=%d\n",n);
	n=fun3(30);
	printf("Fun3() Function Return Value=%d\n",n);
	getch();
}
int fun1(int x)
{          // 10                         //Function Defination
	printf("FYBCA=%d\n",x);
	x=x+90;
	return x;
}
int fun2(int y)
{           //20
	printf("SYBCA=%d\n",y);
	y=y+180;
	return y;
}
int fun3(int z)
{           //30
	printf("TYBCA=%d\n",z);
	z=z+270;
	return z;
}