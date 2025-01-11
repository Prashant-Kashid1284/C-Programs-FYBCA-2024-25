/*Example of goto statement[Jumping]*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	goto Amit;
	Sangita:
	printf("One\n");
	goto Lalit;
	Vivek:
	printf("Two\n");
	goto End;
	Sandip:
	printf("Three\n");
	goto Sangita;
	Lalit:
	printf("Four\n");
	goto Vivek;
	Amit:
	printf("Five\n");
	goto Sandip;
	End:
	getch();
}                                  //n=8965,  sum=28  ,sum=10   sum=1


