/*To Accept & display 2-D Array using function[Passing Entire 2-D Array]*/
#include<stdio.h>
void main()
{
	int a[3][3],i,j,m,n;
	void TwoDarray(int a[3][3],int m,int n);
	printf("Enter How Many Rows\n");
	scanf("%d",&m);
	printf("Enter How Many Columns\n");
	scanf("%d",&n);
	printf("To Accept an Array\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	TwoDarray(a,m,n);
}
void TwoDarray(int x[3][3],int r,int c)
{
	int i,j;
	printf("To display 2-D Array in Matrix Form\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
}







