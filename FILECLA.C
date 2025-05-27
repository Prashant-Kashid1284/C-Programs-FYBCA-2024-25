/*To Copy the contents of one file into another file using command line Arguments*/
#include<stdio.h>
void main(int argc,char *argv[])
{
	FILE *x,*y; //fp(User defined/Variable) is file pointer(Defining a file)
	char s[20],ch;
	clrscr();
	if(argc!=4)
	{
		printf("Wrong Arguments\n");
		exit(0);
	}
	x=fopen(argv[2],"w");		   //Opening a File
	if(x==NULL)
	{
		printf("File Can Not be Open\n");
		exit(0);
	}
	strcpy(s,argv[1]);
	fputs(s,x);		    //file
	fclose(x);                               //closing a file
	x=fopen(argv[2],"r");		   //Repening a File
	y=fopen(argv[3],"w");            //Opening a File
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