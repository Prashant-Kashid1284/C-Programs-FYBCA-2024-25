/*To Find Maximum of 2 Numbers using Macros*/
#define MAX(m,n) m>n?m:n    //Parameterized(Argumented) Macro(User Defined)
void main()
{
	int x,y;
	clrscr();
	printf("Enter Any Two Numbers\n");
	scanf("%d%d",&x,&y);
	printf("Maximum=%d\n",MAX(x,y));
	getch();
}