/*Example of fprintf() and fscanf() Functions*/
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp1,*fp2;
	int a,x;
	float b,y;
	char s[10],z[10];
	clrscr();
	fp1=fopen("data.txt","w");
	if(fp1==NULL)
	{
		printf("File Can not Open\n");
		exit(0);
	}
	printf("Enter a Interger Number\n");
	scanf("%d",&a);   //45
	printf("Enter a float Number\n");
	scanf("%f",&b);   //78.9
	printf("Enter a String\n");
	flushall();
	gets(s);         //Santosh Kale
	fprintf(fp1,"%d\t%0.1f\t%s\t",a,b,s);       //
	fclose(fp1);
	fp2=fopen("fact.txt","r");
	if(fp2==NULL)
	{
		printf("File Can not Open\n");
		exit(0);
	}
	fscanf(fp2,"%d%f%s",&x,&y,&z);
	printf("Interger Value=%d\n",x);
	printf("Float Value=%f\n",y);
	printf("String Value=%s\n",z);
	fclose(fp2);
	getch();
}