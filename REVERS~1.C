/*To Reverse an Array Elements*/
#include<stdio.h>
void main()
{	
	int a[5],i,n,s=0,e,t;
	printf("Enter How Many Elements\n");
	scanf("%d",&n);
	printf("To Accept an Array\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("To Display an Array\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		printf("%d\n",a[i]);
	}
	e=n-1;
	while(s<e)
	{
		t=a[s];
		a[s]=a[e];
		a[e]=t;
		s++;
		e--;
	}
	printf("To Display Reverse an Array\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		printf("%d\n",a[i]);
	}
	getch();
}
