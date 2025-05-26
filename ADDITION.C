/*To Calculate Addition of Two Numbers using Command Line Argument*/
#include<stdio.h>
void main(int argc,char *argv[])
{
	int x,y,z;
	clrscr();
	if(argc!=3)
	{
		printf("Wrong Arguments\n");
		exit(0);
	}
	x=atoi(argv[1]);
	y=atoi(argv[2]);
	z=x+y;
	printf("Addition=%d\n",z);
	getch();
}