/*Example of Pointer Variable(&,*)using Function(Call By Reference)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	void function1(int *a);
	clrscr();
	printf("Enter any Number\n");
	scanf("%d",&a);       //a=80
	function1(&a);         //Call by Reference
	printf("Value of a in main()=%d\n",a);      //Value of a=80
	getch();
}
void function1(int *a) //a received value of a in main()
{                //*a=*65524=50
	void function2(int **a);
	*a=*a+10;      //*65524(50)+10=60
	function2(&a);         //Call by Value
	printf("Value of a in function1()=%d\n",*a);       //Value of a=80
}
void function2(int **a)
{                //a=60+20=80
	**a=**a+20;        //**65522=*65524=60+20=80
	printf("Value of a in function2()=%d\n",**a);       //Value of a=80
}