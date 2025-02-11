/*To Display Transpose 2-d Array in Matrix Form*/
#include<stdio.h>
void main()
{
	int a[3][3],t[3][3],i,j,m,n;
	clrscr();
	printf("Enter How Many Rows\n");
	scanf("%d",&m);
	printf("Enter How Many Columns\n");
	scanf("%d",&n);
	printf("To Accept 2-D Array\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("To Display 2-D Array in Matrix Form\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{	for(j=0;j<m;j++)
		{
			t[i][j]=a[j][i];
		}
	}
	printf("To Display Transpose 2-D Array in Matrix Form\n");
	for(i=0;i<n;i++)
	{	for(j=0;j<m;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
}

