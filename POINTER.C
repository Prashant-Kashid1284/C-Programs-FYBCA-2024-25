/*To Accept & Display a Number using Pointer*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,p;
	clrscr();
	printf("Enter any Number\n");
	scanf("%d",&a);          //a=50
	p=a;				//p is a Pointer variable when p is assign address of a
	printf("Value of a=%d\n",a);     	// a-- Value of a
	printf("Address of a=%u\n",&a);           // &a--Address of a
	printf("Address of a=%d\n",p);        //*65524---Value of address
	p=p+10;

	printf("Value of a=%d\n",a);
	a=a+10;

	printf("Address of a=%d\n",p);

	getch();
}