/*Example of Function using Pointer(Call By Reference)*/
#include<stdio.h>
void main()
{                                             //&a--Address of a--1001
	int a;                             //a--Value of Variable a--78
	void callbyreference(int *a);              //p=&a
	clrscr();                             //p --Value of p--1001
	printf("Enter Any Number\n");        //*p---Value of Address--*1001
	scanf("%d",&a);       //a=78
	callbyreference(&a);   //Call by Reference means passing Address of
			       //Variable as an arguments to the function
	printf("Value of a in main=%d\n",a);   //Value of a=98
	getch();
}
void callbyreference(int *a)    //int *p=&a
{                      //*a--*1001--78
	void sample(int **a);
	*a=*a+10;       //78+10=88
	sample(&a);
	printf("Value of a in callbyreference=%d\n",*a);   //Value of a=98
}
void sample(int **a)
{             //*(*2001)--*1001--88
	**a=**a+10;     //88+10=98
	printf("Value of a in sample=%d\n",**a);   //Value of a=98
}















