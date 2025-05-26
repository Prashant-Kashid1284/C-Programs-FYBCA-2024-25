/*To Check Whether given Number is Prime or Not,using Command Line Argument*/
#include<stdio.h>
void main(int argc,char *argv[])
{
	int n,a,flag=1;
	clrscr();
	if(argc!=2)
	{
		printf("Wrong argument\n");
		exit(0);
	}
	n=atoi(argv[1]);
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
		printf("%d Number is Prime\n",n);
	}
	else
	{
		printf("%d Number is Not Prime\n",n);
	}
}