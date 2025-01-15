/*To Calculate Compound Interest[Loan Calculation/Fixed Deposit]*/
#include<stdio.h>
#include<conio.h>
void main()
{
	float amt,amt1,r,i,ci,emi;
	int p;
	clrscr();
	printf("Enter a Amount\n");
	scanf("%f",&amt);
	printf("Enter a Rate of Interest\n");
	scanf("%f",&r);
	printf("Enter a Period(in Years)\n");
	scanf("%d",&p);
	amt1=amt;
	i=1;
	while(i<=p)
	{
		ci=amt*r/100;
		amt=amt+ci;
		i++;
	}
	ci=amt-amt1;
	emi=amt/(p*12);
	printf("Compound Interest=%0.2f\n",ci);
	printf("Total Compound Interest=%0.2f\n",amt);
	printf("Equated Monthly Installment=%0.2f\n",emi);
	getch();
}