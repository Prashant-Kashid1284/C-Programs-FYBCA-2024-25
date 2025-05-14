/*To Accept & Display employee details using Pointer structure(Non-Homogenous)*/
#include<stdio.h>
void main()
{
	struct employee
	{                                       //Non-Homegenous(different)
		int eid;	//2	      //integer value
		char ename[20]; //20 		//string value
		char dj[10];   //10
		float sal;      //4
	}e,*p;			//s is a structure variable
	clrscr();
	printf("Output=%d\n",sizeof(e));  //Output=36
	printf("Output=%d\n",sizeof(*p));  //Output=36
	printf("Enter a Employee ID\n");
	scanf("%d",&e.eid);
	printf("Enter a Employee Name\n");
	flushall();
	gets(e.ename);
	printf("Enter a Employee Date of Joining\n");
	flushall();
	gets(e.dj);
	printf("Enter a Employee Salary\n");
	scanf("%f",&e.sal);
	p=&e;           //p is Pointer structure variable
	printf("RollNo\tName\t\tAddress\tPercentage\n");
	printf("%d\t",(*p).eid);     //p->eid
	printf("%s\t",(*p).ename);   //p->ename
	printf("%s\t",(*p).dj);      //p->dj
	printf("%0.1f\t\t",(*p).sal);//p->sal
	getch();
}










