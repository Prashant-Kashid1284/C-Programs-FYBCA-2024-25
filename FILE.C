/*To Accept String from file(Text file)*/
#include<stdio.h>
void main()
{
	FILE *fp; //fp(User defined/Variable) is file pointer(Defining a file)
	char ch;
	clrscr();
	fp=fopen("ganesh.txt","r");		   //Opening a File
	while((ch=fgetc(fp))!=EOF) 		//End of File
	{   //EOF         !=EOF
		printf("%c",ch);       //Good Afternoon
	}
	fclose(fp);                               //closing a file
	getch();
}