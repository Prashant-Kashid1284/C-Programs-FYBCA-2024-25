/*To Accept & Display student details using structure(Non-Homogenous)*/
#include<stdio.h>
struct student
{                                       //Non-Homegenous(different)
	int rno;	//2	      //integer value
	char sname[20]; //20 		//string value
	char add[10];   //10
	float per;      //4
};
void main()
{
	struct student s1,s2,s3;	//s is a structure variable
	clrscr();
	printf("Output=%d\n",sizeof(s1));  //Output=36
	printf("Output=%d\n",sizeof(s2));
	printf("Output=%d\n",sizeof(s3));
	printf("Enter a Roll Number\n");
	scanf("%d",&s1.rno);
	printf("Enter a Student Name\n");
	flushall();
	gets(s1.sname);
	printf("Enter a Student Address\n");
	flushall();
	gets(s1.add);
	printf("Enter a Percentage\n");
	scanf("%f",&s1.per);
	printf("Enter a Roll Number\n");
	scanf("%d",&s2.rno);
	printf("Enter a Student Name\n");
	flushall();
	gets(s2.sname);
	printf("Enter a Student Address\n");
	flushall();
	gets(s2.add);
	printf("Enter a Percentage\n");
	scanf("%f",&s2.per);
	printf("Enter a Roll Number\n");
	scanf("%d",&s3.rno);
	printf("Enter a Student Name\n");
	flushall();
	gets(s3.sname);
	printf("Enter a Student Address\n");
	flushall();
	gets(s3.add);
	printf("Enter a Percentage\n");
	scanf("%f",&s3.per);
	printf("RollNo\tName\t\tAddress\tPercentage\n");
	printf("%d\t",s1.rno);
	printf("%s\t",s1.sname);
	printf("%s\t",s1.add);
	printf("%0.1f\n",s1.per);
	printf("%d\t",s2.rno);
	printf("%s\t",s2.sname);
	printf("%s\t",s2.add);
	printf("%0.1f\n",s2.per);
	printf("%d\t",s3.rno);
	printf("%s\t",s3.sname);
	printf("%s\t",s3.add);
	printf("%0.1f\n",s3.per);
	getch();
}

