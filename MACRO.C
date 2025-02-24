/*Example of Preprocessor*/
#define ADD(a,b) a+b      //Parameterized Macro
#define SQR(t) t*t
#define MAX(m,n) m>n?m:n
void main()
{
	int x,y;
	clrscr();
	printf("Enter Any Two Numbers\n");
	scanf("%d%d",&x,&y);
	printf("Addition=%d\n",ADD(x,y));    //Macro Expansion
	printf("Square of x=%d\n",SQR(x));
	printf("Square of y=%d\n",SQR(y));
	printf("Maximum=%d\n",MAX(x,y));
	getch();
}