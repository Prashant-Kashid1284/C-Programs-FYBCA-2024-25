/*To Accept & Display employee details using Array of structure(fread() & fwrite() Function)*/
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
	FILE *fp;
	struct employee e[10],w[10];	//e is a Array of structure variable
	int i;
	float n;
	clrscr();
	fp=fopen("employee.dat","w");
	if(fp==NULL)
	{
		printf("File Can not Open\n");
		exit(0);
	}
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
		fwrite(&e[i],sizeof(e[0]),1,fp);
	}
	fclose(fp);
	fp=fopen(""
	printf("To Display Employee Deatils\n");
	printf("EmpID\tName\t\tDateOfJoining\tSalary\n");
	while(!feof())
	{
		fread(&w,sizeof(w),1,fp);
		printf("%d\t",w.eid);
		printf("%s\t",w.ename);
		printf("%s\t",w.dj);
		printf("%0.1f\n",w.sal);
	}
	getch();
}
