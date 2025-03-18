 /*C Program to display Current Date,Time & Name of Fileusing predefined Macros*/
#include<stdio.h>
#define sqr(x) x*x          //Argumented Macro (User Defined)
void main()
{
	clrscr();
	printf("Square=%d\n",sqr(6));       //User Defined Macros
	printf("Program Compilation Date=%s\n",__DATE__);//Predefined Macros
	printf("Program Compilation Time=%s\n",__TIME__);
	printf("Program Compilation File Name=%s\n",__FILE__);
	printf("Program Compilation Number of Lines=%d\n",__LINE__);
	getch();
}