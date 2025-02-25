/*Example of Conditional Complilation Directive(Preprocessor) #ifdef*/
#include<stdio.h>            //File Inclusion Directive
#include<conio.h>
#define PI 3.14
void main()
{
	clrscr();
	#ifdef PI                                                                       //Conditional Compilation Directive
		printf("PI is defined\n");
	#else
		printf("PI is Not Defined\n");
	#endif
	getch();
}
/*Output is 
PI is defined
*/