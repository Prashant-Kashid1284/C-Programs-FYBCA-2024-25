/*To Accept & Display a Number using Pointer to Pointer*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,*p,**q,***r;
	clrscr();
	printf("Enter any Number\n");
	scanf("%d",&a);          //a=50
	p=&a;//Pointer is a Variable which store address of another Variable
	printf("Value of a=%d\n",a);      //Value ofa=50
printf("Value of a using Pointer=%d\n",*p); //Value of a using pointer=50
	q=&p;//Pointer to Pointer which points address of another pointer
	printf("Value of a using Pointer to Pointer=%d\n",**q);
	r=&q;
	printf("Value of a using Pointer to Pointer=%d\n",***r);
	**q=**q+20;                       //Value ofa=70
	*p=*p+30;                         //Value ofa100
	printf("Value of a=%d\n",a);      //Value ofa=100
	getch();
}