/*To Find Maximum of 3 Numbers usingCommand Line Arguments*/
#include<stdio.h>
void main(int argc,char *argv[])
{
     int x,y,z;
     clrscr();
     if(argc!=4)
     {
	printf("Wrong Arguments\n");
	exit(0);
     }
     x=atoi(argv[1]);
     y=atoi(argv[2]);
     z=atoi(argv[3]);
     if(x>y && x>z)
     {
	printf("Maximum=%d\n",x);
     }
     else
     {
	if(y>x && y>z)
	{
		printf("Maximum=%d\n",y);
	}
	else
	{
		printf("Maximum=%d\n",z);
	}
     }
     getch();
}





