/*To Compare two String but ignore case(LowerCase = UpperCase) Using SLF*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20];
	int n;
	clrscr();
	printf("Enter a First String\n");
	gets(s1);                //Welcome
	printf("Enter a Second String\n");         //A-Z(65-90) a-z(97-122)
	gets(s2);               //Computer
	n=strcmpi(s1,s2);//W-C(87-67=20)strncmpi()function returns 0 /+ve/-ve
	if(n==0)
	{
		printf("%s is equal to %s\n",s1,s2);
	}
	else
	{
		if(n>0)
		{
			printf("%s is Greater than %s\n",s1,s2);
		}
		else
		{
			printf("%s is Less than %s\n",s1,s2);
		}
	}
	getch();
}











