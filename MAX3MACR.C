/*To Find Maximum of 3 Numbers using Nested Macros*/
#define MAX2(m,n) m>n?m:n    //Parameterized(Argumented) Macro(User Defined)
#define MAX3(a,b,c) MAX2(MAX2(a,b),c)
void main()
{
	int x,y,z;
	clrscr();
	printf("Enter Any Two Numbers\n");
	scanf("%d%d%d",&x,&y,&z);
	printf("Maximum=%d\n",MAX3(x,y,z));
	getch();
}