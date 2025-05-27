/*To Append one File at the end of another file using Command Line Arguments*/
#include<stdio.h>
void main(int argc,char *argv[])
{
	FILE *fp1,*fp2,*fp3; //fp(User defined/Variable) is file pointer(Defining a file)
	char s1[20],s2[20],ch;
	clrscr();
	if(argc!=6)
	{
		printf("Wrong Arguments\n");
		exit(0);
	}
	fp1=fopen(argv[3],"w");		   //Opening a File
	fp2=fopen(argv[4],"w");
	if(fp1==NULL || fp2==NULL)
	{
		printf("File Can Not be Open\n");
		exit(0);
	}
	strcpy(s1,argv[1]);     	//Samarth
	strcpy(s2,argv[2]);             //Sahyadri
	fputs(s1,fp1);		    //file
	fputs(s2,fp2);
	fclose(fp1);                               //closing a file
	fclose(fp2);
	fp1=fopen(argv[3],"r");		   //Repening a File
	fp2=fopen(argv[4],"r");            //Opening a File
	fp3=fopen(argv[5],"a");
	if(fp1==NULL || fp2==NULL || fp3==NULL)
	{
		printf("File Can Not be Open\n");
		exit(0);
	}
	while((ch=fgetc(fp1))!=EOF) 		//End of File
	{   // EOF        !=EOF
		fputc(ch,fp3);           //Samarth College         (bcs.txt)
		printf("%c",ch);         //Samarth College         (console)
	}
	while((ch=fgetc(fp2))!=EOF) 		//End of File
	{   // EOF        !=EOF
		fputc(ch,fp3);           //Samarth CollegeSahyadri Collge         (bcs.txt)
		printf("%c",ch);         //Sahyadri College         (console)
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	getch();
}