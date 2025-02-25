/*Example of Conditional Complilation Directive(Preprocessor) #ifndef*/
#include<stdio.h>            //File Inclusion Directive
#include<conio.h>
#define PI 3.14
void main()
{
	clrscr();
	#ifndef PI                                                                    //Conditional Compilation Directive
		printf("PI is defined\n");	 //#ifndef is executed when PI is Not Defined
	#else
		printf("PI is Not Defined\n");	 //#else is executed when PI is Defined
	#endif
	getch();
}
/*Output is 
PI is Not Defined
*/