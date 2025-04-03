/*To Find Maximum of 2 Numbers using Function(Call by Reference)*/
#include<stdio.h>
#include<conio.h>
void main()
{
     int x,y,max;
     int maximum(int *m,int *n);
     clrscr();
     printf("enter any 2 numbers\n");
     scanf("%d%d",&x,&y);
     max=maximum(&x,&y);        //Call by Reference
     printf("Maximum=%d\n",max);
     getch();
}
int maximum(int *m,int *n)
{
	if(*m>*n)
	{//*1001>*2001-->50>90 F
		return *m;  //Return Value of *m-->*1001--
	}
	else
	{
		return *n;    //Return Value of *n-->*2001-->90
	}
}