/*To Convert Number into Word using switch-case Statement*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int N,r,rev=0;
	clrscr();
	printf("Enter any Number\n");
	scanf("%d",&N);
	while(N>0)
	{
		r=N%10;
		rev=rev*10+r;
		N=N/10;
	}
	while(rev>0)
	{
		r=rev%10;
		switch(r)
		{
		case 0:	printf("Zero\t");
			break;
		case 1: printf("One\t");
			break;
		case 2:	printf("Two\t");
			break;
		case 3:	printf("Three\t");
			break;
		case 4:	printf("Four\t");
			break;
		case 5:	printf("Five\t");
			break;
		case 6:	printf("Six\t");
			break;
		case 7:	printf("Seven\t");
			break;
		case 8:	printf("Eight\t");
			break;
		case 9:	printf("Nine\t");
		}
		rev=rev/10;
	}
	getch();
}