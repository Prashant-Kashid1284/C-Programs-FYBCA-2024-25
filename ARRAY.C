/*To Accept & Display an Array (Multiple Variable/Values)*/
#include<stdio.h>
void main()
{
	int a[10],n,i;      //Multiple
	clrscr();
	printf("Enter How Many values in an Array\n");
	scanf("%d",&n);    //n=5
	printf("To Accept an Array\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);         //a[4]=54
		scanf("%d",&a[i]);         //
	}

	printf("To Display an Array\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);         //a[0]=54
		printf("%d\n",a[i]);         //
	}

	getch();
}