/*To Calculate sum of Following Series upto 'n' Terms*/
#include<stdio.h>
#include<math.h>
void main()
{
	int a,n,p,x,sum=0;
	clrscr();
	printf("Enter a Value of x\n");
	scanf("%d",&x);
	printf("Enter a Range\n");
	scanf("%d",&n);
	for(a=0;a<=n;a+=2)
	{
		p=pow(x,a);
		sum=sum+p;
	}
	printf("Sum of Series=%d\n",sum);
	getch();
}

