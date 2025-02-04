/*To Calculate sum of an Array Elemets(Multiple Variable/Values)*/
#include<stdio.h>
void main()
{
	int a[10],n,i,sum=0;      //Multiple
	clrscr();
	printf("Enter How Many values in an Array\n");
	scanf("%d",&n);    //n=5
	printf("To Accept an Array\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);         //a[4]=54
		scanf("%d",&a[i]);         //
	}

	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}

	printf("To Display an Array\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);         //a[0]=54
		printf("%d\n",a[i]);         //
	}
	printf("Sum of an Array=%d\n",sum);
	getch();
}