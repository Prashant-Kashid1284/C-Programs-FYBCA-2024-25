/*Example of Function using Pointer(Call By Reference)*/
#include<stdio.h>
void main()
{                                             //&a--Address of a--1001
	int a;                            //a--Value of Variable a--50
	void callbyreference(int *a);              //p=&a
	clrscr();                         //p --Value of p--1001
	printf("Enter Any Number\n");     //*p---Value of Address--*1001-50
	scanf("%d",&a);        //a=50
	callbyreference(&a);   //Call by Reference means passing Address of
			       //Variable as an arguments to the function
	printf("Value of a in main=%d\n",a);   //Value of a=60
	getch();
}
void callbyreference(int *a)    //int *p=&a
{                      //*a--*1001--50
	*a=*a+10;      //50+10=60
	printf("Value of a in callbyreference=%d\n",*a);  //Value of a=60
}