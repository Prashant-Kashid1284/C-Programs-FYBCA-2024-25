/*To Copy one string into another string Without Using SLF[using Function]*/
void main()
{	char s1[20];
	void stringcopy(char x[]);   //Function Declaration
	clrscr();
	printf("Enter a String\n");
	gets(s1);
	stringcopy(s1);          //Function Calling
	getch();
}
void stringcopy(char x[])       //Function Defination
{
	char y[20];
	int i=0;
	while(x[i]!='\0')
	{
		y[i]=x[i];
		i++;
	}
	y[i]='\0';
	printf("Original String=%s\n",x);
	printf("Copied String=%s\n",y);
}