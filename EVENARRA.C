/*To Find Even Number from an Array Elements*/
#include<stdio.h>
void main()
{
	int a[5],i,n;
	clrscr();
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
	printf("Even Number from an Array Elements\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("a[%d]=%d\n",i,a[i]);
		}
	}
}










