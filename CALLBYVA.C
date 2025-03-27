/*Example of Function(Call By Value)*/
#include<stdio.h>
void main()
{
	int a;                                //a--Value of Variable a--78
	void callbyvalue(int a);
	clrscr();
	printf("Enter Any Number\n");
	scanf("%d",&a);       //a=78
	callbyvalue(a);		//Call by Value means passing value of
			       //Variable as an arguments to the function
	printf("Value of a in main=%d\n",a);   //Value of a=78
	getch();
}
void callbyvalue(int a)
{
	a=a+10;
	printf("Value of a in function=%d\n",a);   //Value of a=88
}