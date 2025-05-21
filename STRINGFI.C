/*To Accept String from user and store in file(Text file)*/
#include<stdio.h>
void main()
{
	FILE *fp; //fp(User defined/Variable) is file pointer(Defining a file)
	char s[10];
	clrscr();
	fp=fopen("aditya.net","w");		   //Opening a File
	printf("Enter a String\n");
	gets(s);            //Kashid Prashant Rajaram
	fputs(s,fp);                      //file
	printf("String Value=%s\n",s);    //puts(s);Console/Output screen
	fclose(fp);                               //closing a file
	getch();
}
