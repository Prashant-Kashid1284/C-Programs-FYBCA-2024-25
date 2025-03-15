/* Sub-Functions with No Arguments & Without Returning Value within main() function*/
#include<stdio.h>
void main()
{
	void fun1();
	void fun2();
	void fun3();
	clrscr();

	fun1();          //function Calling in main() with No Arguments
	fun2();
	fun3();
	getch();
}
void fun1()
{                              //Function Defination
	printf("FYBCA\n");
}
void fun2()
{
	printf("SYBCA\n");
}
void fun3()
{
	printf("TYBCA\n");
}