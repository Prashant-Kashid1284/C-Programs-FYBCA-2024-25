/*Example of Preprocessor*/
#define SQR(a) a*a            //Parameterized Macro
#define CUBE(a) SQR(a)*a      //Nested Macro(Macro within Macro)
#define FORTH(a) SQR(a)*SQR(a)
void main()
{
	int x=3,y=5;
	clrscr();
	printf("Result x=%d\n",SQR(x));    //Macro Expansion
	printf("Result y=%d\n",CUBE(y));
	printf("Result=%d\n",FORTH(x));    //Macro Expansion
	getch();             //x+y*x+y
}