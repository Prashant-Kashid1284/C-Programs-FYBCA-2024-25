/*To Reverse a given string without using SLF[using pointer]*/
void main()
{	char s[20],t,*p;
	int st=0,i=0,e;
	clrscr();
	printf("Enter any String\n");
	gets(s);     //Welcome
	p=&s[0];
	while(*(p+i)!='\0'){i++;}
	e=i-1;
	while(st<e)
	{
		t=*(p+st);
		*(p+st)=*(p+e);
		*(p+e)=t;
		st++;
		e--;
	}
	printf("String Reverse=%s\n",s);
	getch();
}
