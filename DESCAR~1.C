/*To Sort an Array Elements in Descending Order*/
#include<stdio.h>
void main()
{
	int a[5],i,j,n,t;
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
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("To Sort an Array in Descending Order\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		printf("%d\n",a[i]);
	}
	getch();
}



