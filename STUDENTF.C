/*To Accept & Display student details using structure,store in Binary File(fread(),fwrite() Fun)*/
#include<stdio.h>
struct student
{                                       //Non-Homegenous(different)
	int rno;	//2	      //integer value
	char name[20]; //20 		//string value
	float per;      //4            //float Value
};
void main()
{
	FILE *fp;
	struct student s,d;	//s is a structure variable
	clrscr();
	printf("Output=%d\n",sizeof(s));  //Output=26
	fp=fopen("student.doc","w");
	if(fp==NULL)
	{
		printf("File Can Not Open\n");
		exit(0);
	}
	printf("Enter a Roll Number\n");
	scanf("%d",&s.rno);
	printf("Enter a Student Name\n");
	flushall();
	gets(s.name);
	printf("Enter a Percentage\n");
	scanf("%f",&s.per);
	fwrite(&s,sizeof(s),1,fp);
	fclose(fp);
	fp=fopen("student.doc","r");
	if(fp==NULL)
	{
		printf("File Can Not Open\n");
		exit(0);
	}
	fread(&d,sizeof(d),1,fp);
	printf("To Display Student Details\n");
	printf("RollNo\tName\t\tPercentage\n");
	printf("%d\t",d.rno);
	printf("%s\t",d.name);
	printf("%0.1f\n",d.per);
	fclose(fp);
	getch();
}
