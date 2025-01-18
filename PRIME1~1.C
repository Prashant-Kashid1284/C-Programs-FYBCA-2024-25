/*To Find Prime Number InBetween 1 to GIven Range*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,flag,range;
	clrscr();
	printf("Enter a Range(Limit)\n");
	scanf("%d",&range);
	printf("Prime Numbers InBetween 1 to %d Number\n",range);
	for(n=1;n<=range;n++)
	{
		flag=1;
		a=2;
		while(a<n)
		{
			if(n%a==0)
			{
				flag=0;
				break;
			}
			a++;
		}
		if(flag==1)
		{
			printf("%d\n",n);
		}
	}
	getch();
}