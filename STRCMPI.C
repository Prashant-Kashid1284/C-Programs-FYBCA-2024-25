/*To Compare Number of Characters of two String Using SLF*/
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
	n=strncmp(s1,s2,3); //W-C(87-67=20) //strncmp() function returns 0 or +ve ot -ve
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











