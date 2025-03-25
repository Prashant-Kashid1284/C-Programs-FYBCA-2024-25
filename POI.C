/*Example of Pointer Variable(&,*)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,*p,**q;
	clrscr();
	printf("Enter any Number\n");
	scanf("%d",&a);          //a=50 Pointer is a Variable which points to
	p=&a;                    //&a=65524, p=65524 the address of another variable
	a=a+10;                          //a=50+10=60
	printf("Value of a=%d\n",a);     //Value of a=60
	*p=*p+20;                          //p=*65524(60)+20=80
	printf("Value of a=%d\n",a);     //Value of p=65524 (Address of a)

	q=&p;		//Pointer to Pointer is a Variable which points
	**q=**q+30;		       //to the address of anothe pointer variable
	printf("Value of a=%d\n",a);      //Value of a=110
	getch();               //*65524--60
}
