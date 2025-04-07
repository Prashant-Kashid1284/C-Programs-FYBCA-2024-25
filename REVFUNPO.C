/*To Calculate Reverse of given Number using Pointer Function*/
#include<stdio.h>
#include<conio.h>
void main()                               //int a,*p;  a is Variable
{                                            //p=&a;  *p is Pointer Variable
	int N,rev;   //Local                //p is points to the address a
	int reverse(int x);
	int (*ptr)(int x);
	clrscr();
	printf("Enter any Number\n");
	scanf("%d",&N);    ///N=654
	ptr=reverse;      //ptr points to the address of reverse function
	rev=(*ptr)(N);		//Function Calling / Call by value
	printf("Reverse=%d\n",rev);//rev=456
	getch();
}
int reverse(int x)   //x received value of N (Sub-Program) User Defined
{	      //x=654
	int r,t=0;   //Local
	while(x>0)            //654>0 T  65>0 T   6>0 T   0>0 F
	{
		r=x%10;       //r=654%10=4    65%10=5  6%10=6
		t=t*10+r; //rev=0*10+4=4  4*10+5=45   45*10+6=456
		x=x/10;       //x=654/10=65   65/10=6     6/10=0
	}
	return t;
}