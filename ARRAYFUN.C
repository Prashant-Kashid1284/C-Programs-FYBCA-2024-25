/*To Accept & Display an 1-D Array (Multiple Variable/Values) using Function*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],n,i;      //Multiple values
	void array(int x[],int m);
	clrscr();
	printf("Enter How Many values in an Array\n");
	scanf("%d",&n);    //n=5
	printf("To Accept an Array\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);         //a[4]=54
		scanf("%d",&a[i]);         //
	}
	array(a,n);
	getch();
}
void array(int x[],int m)
{
	int i;
	printf("To Display an Array\n");
	for(i=0;i<m;i++)
	{
		printf("x[%d]=",i);         //a[0]=54
		printf("%d\n",x[i]);         //
	}
}