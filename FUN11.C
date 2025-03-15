/*Sub-Functions with Arguments & Without Returning Value within main() function*/
#include<stdio.h>
void main()
{
	void fun1(int);
	void fun2(int);
	void fun3(int);
	clrscr();

	fun1(10);          //function Calling in main() with Arguments
	fun2(20);
	fun3(30);
	getch();
}
void fun1(int x)
{          // 10                         //Function Defination
	printf("FYBCA=%d\n",x);
}
void fun2(int y)
{           //20
	printf("SYBCA=%d\n",y);
}
void fun3(int z)
{           //30
	printf("TYBCA=%d\n",z);
}