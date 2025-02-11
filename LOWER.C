/*To Calculate sum of Lower Triangular mxm Matrix*/
#include<stdio.h>
void main()
{
	int a[3][3],i,j,m,n,sum=0;
	clrscr();
	printf("Enter How Many Rows\n");
	scanf("%d",&m);
	printf("Enter How Many Columns\n");
	scanf("%d",&n);
	printf("To Accept 2-D Array\n");
	for(i=0;i<m;i++)
	{	for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("To Display 2-D Array in Matrix Form\n");
	for(i=0;i<m;i++)
	{	for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("To Display Lower Triangular matrix\n");
	for(i=0;i<m;i++)
	{	for(j=0;j<n;j++)
		{
			if(i>=j)
			{
				printf("%d",a[i][j]);
				sum=sum+a[i][j];
			}
			printf("\t");
		}
		printf("\n");

	}
	printf("Sum of Lower Triangular matrix=%d\n",sum);
}
