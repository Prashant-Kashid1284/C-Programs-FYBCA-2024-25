/*To Calculate sum of Fibonacci Series upto 'n'Terms(Using Pointer Function)*/
#include<stdio.h>
void main()
{
	int n;
	void fibonacci(int *p);
	void (*ptrfibo)(int *p);
	clrscr();
	printf("Enter How Many Terms\n");
	scanf("%d",&n);               //n=10
	ptrfibo=&fibonacci;     //Pointer Function
	(*ptrfibo)(&n);         //Call By Reference
	getch();
}
void fibonacci(int *p)
{		//n=10
	int f1=3,f2=6,f3,a;
	printf("%d\t%d\t",f1,f2);	//3	6	9	15	24	39	63
	for(a=1;a<=*p-2;a++)
	{
		f3=f1+f2;
		printf("%d\t",f3);
		f1=f2;
		f2=f3;
	}
}