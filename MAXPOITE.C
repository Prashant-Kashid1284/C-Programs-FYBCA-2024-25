/*To Find Maximum of 2 Numbers using Returning Pointer from Function*/
#include<stdio.h>
#include<conio.h>
void main()
{
     int x,y,*max;
     int* maximum(int *m,int *n);
     clrscr();
     printf("enter any 2 numbers\n");
     scanf("%d%d",&x,&y);
     max=maximum(&x,&y);        //Call by Reference
     printf("Maximum=%u\n",*max);    //Maximum=*65524=150
     getch();
}
int* maximum(int *m,int *n)
{
	if(*m>*n)
	{//*65524>*65522-->150>90 T
		return m;  //Return Value of m-->65524
	}
	else
	{
		return n;    //Return Value of n-->65522
	}
}