/*To Calculate sum of 2-d Array Elements*/
#include<stdio.h>
void main()
{	
	int a[3][3],i,j,m,n,sum=0;
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
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
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
	printf("Sum of 2-D array=%d\n",sum);
}




