/*To Copy the contents of one file into another file*/
#include<stdio.h>
void main()
{
	FILE *x,*y; //fp(User defined/Variable) is file pointer(Defining a file)
	char s[20],ch;
	clrscr();
	x=fopen("bca.txt","w");		   //Opening a File
	if(x==NULL)
	{
		printf("File Can Not be Open\n");
		exit(0);
	}
	printf("Enter a String\n");
	gets(s);            //Kashid Prashant Rajaram
	fputs(s,x);		    //file
	fclose(x);                               //closing a file
	x=fopen("bca.txt","r");		   //Repening a File
	y=fopen("bba.txt","w");            //Opening a File
	if(x==NULL || y==NULL)
	{
		printf("File Can Not be Open\n");
		exit(0);
	}
	while((ch=fgetc(x))!=EOF) 		//End of File
	{   // EOF        !=EOF
		fputc(ch,y);           //Samarth College         (bba.txt)
		printf("%c",ch);       //Samarth College         (console)
	}
	fclose(x);
	fclose(y);
	getch();
}