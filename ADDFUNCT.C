/*Example of File Inclusion Directive(Preprocessor)*/
#include<stdio.h>
#include "fun.c"      //file inclusion
void main()
{
	int x,y,z;
	int addition(int x,int y);  //Function Declaration
	clrscr();
	printf("Enter Any Two Numbers\n");
	scanf("%d%d",&x,&y);
	z=addition(x,y);   //Function Calling(Passing Arguments)
	printf("Addition=%d\n",z);
	getch();
}
