/*Automatic(Implicit) Type Casting*/
void main()
{
	int a;		    //Target small data type(2 byte)     char<int<float
	float b=5.3;        //Source large data type(4 byte)       1 < 2 < 4
	clrscr();
	a=b;            //type casting means convert one data type into anothe data type
	printf("Value of a=%d\n",a);
	printf("Value of b=%0.1f\n",b);
	getch();
}