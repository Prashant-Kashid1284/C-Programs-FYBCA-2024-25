/*Automatic(Implicit) Type Casting*/
void main()
{
	int a=5;	//Source small data type(2 byte)     char<int<float
	float b;        //Target large data type(4 byte)       1 < 2 < 4
	clrscr();
	b=a;            //type casting means convert one data type into anothe data type
	printf("Value of a=%d\n",a);
	printf("Value of b=%0.2f\n",b);
	getch();
}