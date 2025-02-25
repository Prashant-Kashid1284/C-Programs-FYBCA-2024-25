/*Example of Conditional Complilation Directive(Preprocessor) #ifdef*/
#include<stdio.h>            //File Inclusion Directive
#include<conio.h>
void main()
{
	clrscr();
	#ifdef PI                                                                         //Conditional Compilation Directive
		printf("PI is defined\n");	    //#ifdef is executed when PI is Defined
	#else
		printf("PI is Not Defined\n");	    //#else is executed when PI is Not Defined
	#endif
	getch();
}
/*Output is 
PI is Not defined
*/