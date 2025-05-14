/*To Accept & Display student details using Pointer structure(Non-Homogenous)*/
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
	struct student s,*p;		//s is a structure variable
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
	p=&s;           //p is Pointer structure variable
	printf("RollNo\tName\t\tAddress\tPercentage\n");
	printf("%d\t",p->rno);     //(*p).rno
	printf("%s\t",p->sname);   //(*p).sname
	printf("%s\t",p->add);     //(*p).add
	printf("%0.1f\n",p->per);//(*p).per
	getch();
}









