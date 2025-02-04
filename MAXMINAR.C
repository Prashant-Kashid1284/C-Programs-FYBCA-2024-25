/*To Find Maximum & Minimum Number from an Array Elemets(Multiple Values)*/
#include<stdio.h>
void main()
{
	int a[10],n,i,max,min;      //Multiple
	clrscr();
	printf("Enter How Many values in an Array\n");
	scanf("%d",&n);
	printf("To Accept an Array\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);         //a[4]=54
		scanf("%d",&a[i]);         //
	}
	max=min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}

	printf("To Display an Array\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);         //a[0]=54
		printf("%d\n",a[i]);         //
	}
	printf("Maximum of an Array=%d\n",max);
	printf("Minimum of an Array=%d\n",min);
	getch();
}