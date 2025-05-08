/*To Accept & Display student details using array of structure(Non-Homogenous)*/
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
	struct student s[10];	//s is a structure variable
	int i;
	float n;
	clrscr();
	printf("Output=%d\n",sizeof(s));  //Output=36x10=360
	printf("Enter How Many Records\n");
	scanf("%f",&n);    //n=5
	printf("To Accept student Details\n");
	for(i=0;i<n;i++)
	{
		printf("Enter a Roll Number\n");
		scanf("%d",&s[i].rno);
		printf("Enter a Student Name\n");
		flushall();
		gets(s[i].sname);
		printf("Enter a Student Address\n");
		flushall();
		gets(s[i].add);
		printf("Enter a Percentage\n");
		scanf("%f",&s[i].per);
	}
	printf("Display Student Details\n");
	printf("RollNo\tName\t\tAddress\tPercentage\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",s[i].rno);
		printf("%s\t",s[i].sname);
		printf("%s\t",s[i].add);
		printf("%0.1f\n",s[i].per);
	}
	printf("Display Student Details whose percentage >=60\n");
	printf("RollNo\tName\t\tAddress\tPercentage\n");
	for(i=0;i<n;i++)
	{
		if(s[i].per>=60)
		{
			printf("%d\t",s[i].rno);
			printf("%s\t",s[i].sname);
			printf("%s\t",s[i].add);
			printf("%0.1f\n",s[i].per);
		}
	}
	getch();
}