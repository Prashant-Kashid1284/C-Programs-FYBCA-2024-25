/* Function within function (Nested Function)*/
#include<stdio.h>
void main()
{
	void fun1();
	clrscr();

	fun1();          //fun1() function Calling in main() with No Arguments
	getch();
}
void fun1()
{                              //Function Defination
	void fun2();
	printf("FYBCA\n");
	fun2();          //fun2() function Calling in fun1() with No Argument
}
void fun2()
{
	void fun3();
	printf("SYBCA\n");
	fun3();         //fun3() function Calling in fun2() with No Argument
}
void fun3()
{
	void fun4();
	printf("TYBCA\n");
	fun4();        //fun4() function Calling in fun3() with No Argument
}
void fun4()
{
	printf("End of Course\n");
}