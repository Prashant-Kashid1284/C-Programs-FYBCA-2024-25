/*Example of #error*/
#include<stdio.h>
#define A 50.0
#define B 0
void main()
{
	clrscr();
	  #if B==0
	  #error "Can not divide by Zero"
	  #else
	  printf("Division=%0.2f\n",A/B);
	  #endif
	  getch();
}
/*Compile Time Error is generated

Can not divide by Zero

*/