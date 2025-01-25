/*To Calculate sum of Following Series upto 'n' Terms*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	int a,n;
	float p,x,sum=0;
	clrscr();
	printf("Enter a Value of x\n");
	scanf("%f",&x);
	printf("Enter a Range\n");
	scanf("%d",&n);
	for(a=0;a<=n;a++)
	{
		p=pow(x,a);
		sum=sum+p;
	}
	printf("Sum of Series=%0.2f\n",sum);
	getch();
}

