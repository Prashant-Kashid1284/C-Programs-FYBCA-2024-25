/*To Accept & Display employee details using structure(Non-Homogenous)*/
#include<stdio.h>
struct employee
{                                       //Non-Homegenous(different)
	int eid;	//2	      //integer value
	char ename[20]; //20 		//string value
	char dj[20];    //10
	float sal;      //4
};
void main()
{
	struct employee e[10];	//e is a Array of structure variable
	int i;
	float n;
	clrscr();
	printf("Output=%d\n",sizeof(e));  //Output=36x10=360
	printf("Enter How Many Records of Employee\n");
	scanf("%f",&n);	//n=5
	for(i=0;i<n;i++)
	{
		printf("Enter a Employee Number\n");
		scanf("%d",&e[i].eid);
		printf("Enter a Employee Name\n");
		flushall();
		gets(e[i].ename);
		printf("Enter a Employee Joining Date\n");
		flushall();
		gets(e[i].dj);
		printf("Enter a Employee Salary\n");
		scanf("%f",&e[i].sal);
	}
	printf("To Display Employee Deatils\n");
	printf("EmpID\tName\t\tDateOfJoining\tSalary\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",e[i].eid);
		printf("%s\t",e[i].ename);
		printf("%s\t",e[i].dj);
		printf("%0.1f\n",e[i].sal);
	}
	getch();
}
