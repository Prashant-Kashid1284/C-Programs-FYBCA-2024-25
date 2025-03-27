/*Example #pragma Directive*/
void fun1();
void fun3();
void fun2();
#include<stdio.h>
#pragma startup fun2
#pragma startup fun3
#pragma startup fun1
#pragma exit fun1
#pragma exit fun3
#pragma exit fun2
void main()
{
	printf("College\n");
}
void fun1()
{
	printf("BCA\n");
}
void fun2()
{
	printf("BBA\n");
}
void fun3()
{
	printf("BCS\n");
}
/*Output is
BCA
BCS
BBA
College
BBA
BCS
BCA
*/