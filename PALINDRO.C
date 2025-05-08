/*To Check Whether given String is Palindrome or not[using pointer]*/
void main()
{
	char s[20],t,*p;                     //flag=1-->Palindrome
	int st=0,i=0,e,flag=1;               //flag=0-->Not Palindrome
	clrscr();
	printf("Enter any String\n");
	gets(s);     //madam  madam
	p=&s[0];     //p=1001
	while(*(p+i)!='\0'){	i++;	}
	e=i-1;
	while(st<e)
	{
		if(*(p+st)!=*(p+e))
		{
			flag=0;
			break;
		}
		st++;
		e--;
	}
	if(flag==1)
	{
		printf("%s String is Palindrome\n",s);
	}
	else
	{
		printf("%s String is Not Palindrome\n",s);
	}
	getch();
}
