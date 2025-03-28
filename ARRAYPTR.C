/*To Accept & Display an 1-D Array (Multiple Variable/Values) using Pointer*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],n,i,*p;      //Multiple Values
	clrscr();
	printf("Enter How Many values in an Array\n");
	scanf("%d",&n);    //n=4
	printf("To Accept an Array\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);    //a[0]=54,a[1]=98,a[2]=12,a[3]=45
		scanf("%d",&a[i]);         //
	}
	p=a;	//Array Using Pointer Defination
			//means points base address
	printf("To Display an Array\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);         //a[0]=54,a[1]=98,a[2]=
		printf("%d\n",*p);         //*1005--12
		p++;			  //p++=1003+(1*2)=1003+2=1005
	}
	getch();
}