/*To Calculate Simple Interest[Loan Calculation/Fixed Deposit] using macro*/
#include<stdio.h>
#include<conio.h>
#define SI(x,y,z) x*y*z/100
void main()
{
	float amt,r;
	int p;
	clrscr();
	printf("Enter a Amount\n");
	scanf("%f",&amt);
	printf("Enter a Rate of Interest\n");
	scanf("%f",&r);
	printf("Enter a Period(in Years)\n");
	scanf("%d",&p);
	printf("Simple Interest=%0.2f\n",SI(amt,r,p));
	getch();
}