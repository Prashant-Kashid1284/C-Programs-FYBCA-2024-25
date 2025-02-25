/*Example of Conditional Complilation Directive(Preprocessor) #undef*/
#include<stdio.h>            //File Inclusion Directive
#include<conio.h>
#define PI 3.14
void main()
{
	clrscr();
	printf("Display Value of PI=%0.2f\n",PI);

	#undef PI				//Conditional Compilation Directive

	#define PI 5.15
	printf("Display Value of PI after Undefined & Redefined=%0.2f\n",PI);


	getch();
}
/*Output is
Display Value of PI=3.14
Display Value of PI after Undefined & Redefined=5.15
*/