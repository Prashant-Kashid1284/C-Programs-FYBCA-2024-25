/*To Find Maximum & Minimum from 2-d Array Elements*/
#include<stdio.h>
void main()
{
	int a[3][3],i,j,m,n,max,min;
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
	max=min=a[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
			if(a[i][j]<min)
			{
				min=a[i][j];
			}
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
	printf("Maximum from 2-D array=%d\n",max);
	printf("Minimum from 2-D array=%d\n",min);
}
















