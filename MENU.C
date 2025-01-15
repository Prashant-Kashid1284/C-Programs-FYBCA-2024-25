//Menu Driven Program using C for Arithmetic Operations(+,-,*,/)
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,ch;
	float c;
	clrscr();
	printf("Enter Any Two  Nunmbers\n");
	scanf("%d%d",&a,&b);
	printf("Menu Driven Program using C\n");
	do
	{
		printf("1:Addition\n");
		printf("2:Subtraction\n");
		printf("3:Multiplication\n");
		printf("4:Division\n");
		printf("0:Exit\n");
		printf("Enter Your Choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	c=a+b;
				printf("Addition=%0.0f\n",c);
				break;
			case 2:	c=a-b;
				printf("Subtraction=%0.0f\n",c);
				break;
			case 3:	c=a*b;
				printf("Multiplication=%0.0f\n",c);
				break;
			case 4: if(b==0)
				{
					printf("Infinity\n");
				}
				else
				{
					c=(float)a/b;
					printf("Division=%0.2f\n",c);
				}
				break;
			case 0: exit(0);
			default:printf("Wrong Choice\n");
		}
	}while(ch!=0);
	getch();
}














