/*To Accept String from user and store in file(Text file)*/
#include<stdio.h>
void main()
{
	FILE *fp; //fp(User defined/Variable) is file pointer(Defining a file)
	char s[10],ch;
	clrscr();
	fp=fopen("sample.dat","w");		   //Opening a File
	printf("Enter a String\n");
	gets(s);            //Kashid Prashant Rajaram
	fputs(s,fp);		    //file
	fclose(fp);                               //closing a file
	fp=fopen("sample.dat","r");		   //Repening a File
	while((ch=fgetc(fp))!=EOF) 		//End of File
	{   //EOF         !=EOF
		printf("%c",ch);       //Good Afternoon
	}
	fclose(fp);
	getch();
}