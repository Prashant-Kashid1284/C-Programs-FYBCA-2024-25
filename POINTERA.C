/*Example of Pointer Arithmetic*/
#include<stdio.h>
void main()
{	int a=50,b=20,c,sum;
	int *p1=&a,*p2=&b,*p3=&c;     	//p1=&a=1001,p2=&b=2001,p3=&c=3001
	clrscr();              //Pointer *65524=50 ,*65522=20,*65520=50+20=70
	printf("Address of a=%u\n",p1);      //65524
	printf("Address of b=%u\n",p2);      //65522
	printf("Address of c=%u\n",p3);      //65520
	p1++; //p1=p1+1=65524+1*2=65524+2=65526
	p2--; //p2=p2-1=65520=1*2=65522-2=65520
	printf("Increment of Addresses=%u\n",p1);   //65526
	printf("Decrement of Addresses=%u\n",p2);   //65520
	if(p1==p3)
	{
		printf("p2 and p3 is Same\n");
	}
	else
	{
		printf("p2 and p3 is Not Same\n");
	}
	getch();
}