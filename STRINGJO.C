/*To Concate(Join) one string at the another string Without Using SLF[using Function]*/
void main()
{
	char s1[20],s2[20];
	void stringjoin(char x[],char y[]);   //Function Declaration
	clrscr();
	printf("Enter a First String\n");
	gets(s1);                 //Welcome  Source
	printf("Enter a Second String\n");
	gets(s2);                //Samarth   Source
	stringjoin(s1,s2);          //Function Calling
	getch();
}
void stringjoin(char x[],char y[])       //Function Defination
{
	int i=0,j=0;
	while(x[i]!='\0'){	i++;	}
	while(y[j]!='\0')
	{
		x[i]=y[j];
		i++;
		j++;
	}
	x[i]='\0';
	printf("First String=%s\n",x);
	printf("Second String=%s\n",y);
}















