/*To Check Whether given Character is Vowel or Not using switch-case Statement*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char N;
	clrscr();
	printf("Enter any Character\n");
	scanf("%c",&N);
	switch(N)
	{
		case 'a':printf("%c Character is Vowel\n",N);
			 break;
		case 'e':printf("%c Character is Vowel\n",N);
			 break;
		case 'i':printf("%c Character is Vowel\n",N);
			 break;
		case 'o':printf("%c Character is Vowel\n",N);
			 break;
		case 'u':printf("%c Character is Vowel\n",N);
			 break;
		case 'A':printf("%c Character is Vowel\n",N);
			 break;
		case 'E':printf("%c Character is Vowel\n",N);
			 break;
		case 'I':printf("%c Character is Vowel\n",N);
			 break;
		case 'O':printf("%c Character is Vowel\n",N);
			 break;
		case 'U':printf("%c Character is Vowel\n",N);
			 break;
		default: printf("%c Character is Not Vowel\n",N);
	}
	getch();
}