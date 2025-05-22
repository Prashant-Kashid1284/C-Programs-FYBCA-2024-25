/*To Count Number of Characters,words & Line from Text File*/
#include<stdio.h>
void main()
{
	int c1=0,c2=0,c3=0;
	FILE *fp; //fp(User defined/Variable) is file pointer(Defining a file)
	char ch;
	clrscr();
	fp=fopen("file.txt","r");		   //Opening a File
	while(!feof(fp)) 		//End of File
	{   //EOF         !=EOF
		ch=fgetc(fp);
		c1++;
		if(ch==' ' || ch=='\n')
		{
			c2++;
		}
		if(ch=='\n')
		{
			c3++;
		}
	}
	printf("Number of Characters=%d\n",c1);
	printf("Number of Words=%d\n",c2);
	printf("Number of Lines=%d\n",c3);
	fclose(fp);                               //closing a file
	getch();
}