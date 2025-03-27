/*Example of Pointer*/
#include<stdio.h>
void main()
{                                             //&a--Address of a--1001
	int a;                             //a--Value of a--78
	clrscr();                          //p --Value of p--1001
	printf("Enter Any Number\n");      //*p---Value of Address--*1001
	scanf("%d",&a); //a=78                               //78
	int *p=&a;      //p is Pointer Variable which stores address of a
	printf("Value of a=%d\n",a);      //Value of a=78
	a=a+10;                   //78+10=88
	printf("Value of a=%d\n",*p);     //Value of a=88
	*p=*p+10;                 //88+10=98
	printf("Value of a=%d\n",a);      //Value of a=98
	getch();
}


