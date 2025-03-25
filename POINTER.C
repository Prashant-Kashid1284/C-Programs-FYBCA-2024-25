/*To Accept & Display a Number using Pointer(&(ampersand),*(asterisk)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,*p;
	clrscr();
	printf("Enter any Number\n");
	scanf("%d",&a);          //a=50
	p=&a;//Pointer is a Variable which store address of another Variable
	printf("Value of a=%d\n",a);      //value of a=50
	a=a+10;                       //a=50+10=60
	printf("Address of a=%u\n",p);  //p--Address of a--655524
	printf("Value of a using Pointer=%d\n",*p);  //*65524---60
	*p=*p+20;
	printf("value of a=%d\n",a);
	printf("value of a=%d\n",*p);
	getch();
}

