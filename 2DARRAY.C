/*To Calculate Addition of Two 2-d Array in Matrix Form*/
#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j,m,n;
	clrscr();
	printf("Enter How Many Rows\n");
	scanf("%d",&m);
	printf("Enter How Many Columns\n");
	scanf("%d",&n);
	printf("To Accept First 2-D Array\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("To Accept Second 2-D Array\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("To Display First 2-D Array in Matrix Form\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("To Display Second 2-D Array in Matrix Form\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("To Display Addition of Two 2-D Array in Matrix Form\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}

