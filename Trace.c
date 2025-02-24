/*Example of Preprocessor*/
#define SQR(a) a*a            //Parameterized Macro
void main()
{
	int x=3,y=5;
	clrscr();
	printf("Result=%d\n",SQR(x+y));    	//Macro Expansion
	getch();                           		//SQR(x+y) = x+y*x+y
}						// 3+5*3+5
/*Output is					// 3+15+5=23
Result=23
*/