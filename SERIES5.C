/*To Calculate sum of Following Series upto 'n' Terms*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	int a,n,f=1;
	float p,x,sum=1;
	clrscr();
	printf("Enter a Value of x\n");
	scanf("%f",&x);
	printf("Enter a Range\n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		f=f*a;
		p=pow(x,a);
		sum=sum+p/f;
	}
	printf("Sum of Series=%0.2f\n",sum);
	getch();
}

