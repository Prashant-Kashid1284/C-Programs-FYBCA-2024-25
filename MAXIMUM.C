/*To Find Maximum of 2 Numbers using Function(Using Return Type)*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,max;
	int maximum(int a,int b);
	clrscr();
	printf("enter any two numbers\n");
	scanf("%d%d",&x,&y);     //x=156,y=78                    //p=pow(x,y);
	max=maximum(x,y);        //Function Calling
	printf("Maximum=%d\n",max);
	getch();
}
int maximum(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

