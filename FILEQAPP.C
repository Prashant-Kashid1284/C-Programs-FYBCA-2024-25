/*To Copy the contents of one file into another file*/
#include<stdio.h>
void main()
{
	FILE *fp1,*fp2,*fp3; //fp(User defined/Variable) is file pointer(Defining a file)
	char s1[20],s2[20],ch;
	clrscr();
	fp1=fopen("bca.cat","w");		   //Opening a File
	fp2=fopen("bba.cat","w");
	if(fp1==NULL || fp2==NULL)
	{
		printf("File Can Not be Open\n");
		exit(0);
	}
	printf("Enter a First String\n");
	gets(s1);            //Samarth College
	printf("Enter a First String\n");
	gets(s2);            //Sahyadri College
	fputs(s1,fp1);		    //file
	fputs(s2,fp2);
	fclose(fp1);                               //closing a file
	fclose(fp2);
	fp1=fopen("bca.cat","r");		   //Repening a File
	fp2=fopen("bba.cat","r");            //Opening a File
	fp3=fopen("bcs.cat","a");
	if(fp1==NULL || fp2==NULL || fp3==NULL)
	{
		printf("File Can Not be Open\n");
		exit(0);
	}
	while((ch=fgetc(fp1))!=EOF) 		//End of File
	{   // EOF        !=EOF
		fputc(ch,fp3);           //Samarth College         (bba.txt)
		printf("%c",ch);       //Samarth College         (console)
	}
	while((ch=fgetc(fp2))!=EOF) 		//End of File
	{   // EOF        !=EOF
		fputc(ch,fp3);           //Samarth College         (bba.txt)
		printf("%c",ch);       //Samarth College         (console)
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	getch();
}