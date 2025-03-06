/*To Find Maximum of 2 Numbers using Function(Using Without Return Type)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,max;
	void maximum(int a,int b);
	clrscr();
	printf("enter any two numbers\n");
	scanf("%d%d",&x,&y);     //x=156,y=78                    //p=pow(x,y);
	maximum(x,y);        //Function Calling
	getch();
}
void maximum(int a,int b)
{
	if(a>b)
	{
		printf("Maximum=%d\n",a);
	}
	else
	{
		printf("Maximum=%d\n",b);
	}
}

