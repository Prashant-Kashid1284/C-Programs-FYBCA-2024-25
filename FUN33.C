/* Function within function (Nested Function) with Arguments & Without Returning Value*/
#include<stdio.h>
void main()
{
	void fun1(int);
	clrscr();

	fun1(10);          //fun1() function Calling in main() with No Arguments
	getch();
}
void fun1(int x)
{           //10                   //Function Defination
	void fun2(int);
	printf("FYBCA=%d\n",x);      //FYBCA=10
	x=x+10;
	fun2(x);          //fun2() function Calling in fun1() with No Argument
}
void fun2(int y)
{           //20
	void fun3(int);
	printf("SYBCA=%d\n",y);          //SYBCA=20
	y=y+10;
	fun3(y);         //fun3() function Calling in fun2() with No Argument
}
void fun3(int z)
{           //30
	void fun4(int);
	printf("TYBCA=%d\n",z);          //TYBCA=30
	z=z+10;
	fun4(z);        //fun4() function Calling in fun3() with No Argument
}
void fun4(int end)
{            //40
	printf("End of Course=%d\n",end);
}