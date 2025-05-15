/*To Accept & Display student details using array of structure(Pointer)*/
#include<stdio.h>
void main()
{
	struct student
	{                                       //Non-Homegenous(different)
		int rno;	//2	      //integer value
		char sname[20]; //20 		//string value
		char add[10];   //10
		float per;      //4
	}s[5],*p;			//s is a array of structure variable
	int i;
	float n;
	clrscr();
	printf("Output=%d\n",sizeof(s));  //Output=36x5=180
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
	p=&s[0];
	printf("Base address of Array Structure=%u\n",p);
	printf("Display Student Details\n");
	printf("RollNo\tName\t\tAddress\tPercentage\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",(p+i)->rno);
		printf("%s\t",(*(p+i)).sname);
		printf("%s\t",(*(p+i)).add);
		printf("%0.1f\n",(p+i)->per);
	}
	getch();
}