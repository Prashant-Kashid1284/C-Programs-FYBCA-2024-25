/*To Accept & Display student details using structure(Function)*/
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
	struct student s;	//s is a structure variable
	void dispstudent(struct student x);	//Function Declaration
	clrscr();
	printf("Output=%d\n",sizeof(s));  //Output=36
	printf("Enter a Roll Number\n");
	scanf("%d",&s.rno);
	printf("Enter a Student Name\n");
	flushall();
	gets(s.sname);
	printf("Enter a Student Address\n");
	flushall();
	gets(s.add);
	printf("Enter a Percentage\n");
	scanf("%f",&s.per);
	dispstudent(s);		//Function Calling
	getch();
}
void dispstudent(struct student x)
{
	printf("RollNo\tName\t\tAddress\tPercentage\n");
	printf("%d\t",x.rno);
	printf("%s\t",x.sname);
	printf("%s\t",x.add);
	printf("%0.1f\t\t",x.per);
}