/*To Search Number in an Array Elements*/
#include<stdio.h>
void main()
{
	int a[5],i,n,flag=0,s;
	printf("Enter How Many Elements\n");
	scanf("%d",&n);
	printf("To Accept an Array\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Enter a Search number\n");
	scanf("%d",&s);
	printf("To Display an Array\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		printf("%d\n",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("%d Number is Search in an Array\n",s);
	}
	else
	{
		printf("%d Number is not Search in an Array\n",s);
	}
	getch();
}


