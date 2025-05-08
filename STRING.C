/*Example of string Initialization */
#include<stdio.h>
void main()
{
	char s1[10]="Welcome";//String Initialization(Assign value to the Variable)
	char s2[]="Good Afternoon";   //Without size
	char s3[10]={'S','a','m','a','r','t','h','\0'};    //With Size
	char s4[]={'C','o','l','l','e','g','e','\0'};    //Without Size
	clrscr();
	printf("String 1 Outout is=%s\n",s1);
	printf("String 2 Outout is=%s\n",s2);
	printf("String 3 Outout is=%s\n",s3);
	printf("String 4 Outout is=%s\n",s4);
	getch();
}