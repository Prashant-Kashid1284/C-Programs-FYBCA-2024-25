/*Example #pragma Directive*/
void display();
#include<stdio.h>
#pragma startup display
#pragma exit display
void main()
{
	printf("Display main\n");
}
void display()
{
	printf("Display User Defined Function\n");
}

/* Output is
Display User Defined Function
Display main
Display User Defined Function
*/