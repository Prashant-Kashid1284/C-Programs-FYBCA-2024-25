/*To Accept & Display product details using ArrayOfStructure(Non-Homogenous)*/
#include<stdio.h>
struct product
{                                     //Non-Homegenous(different)
	int pno;		      //integer value
	char pname[20]; 	      //string value
	float q,price,t;
};
void main()
{
	struct product p[10];	//p is a structure variable
	float n;
	int i;
	clrscr();
	printf("Output=%d\n",sizeof(p));  //Output=340
	printf("Enter How Many Records\n");
	scanf("%f",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a Product Number\n");
		scanf("%d",&p[i].pno);
		printf("Enter a Product Name\n");
		flushall();
		gets(p[i].pname);
		printf("Enter a Quantity\n");
		scanf("%f",&p[i].q);
		printf("Enter a Price\n");
		scanf("%f",&p[i].price);
		p[i].t=p[i].q*p[i].price;
	}
	printf("PNo\tPName\tQuantity\tPrice\tTotal\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",p[i].pno);
		printf("%s\t",p[i].pname);
		printf("%0.1f\t\t",p[i].q);
		printf("%0.1f\t",p[i].price);
		printf("%0.1f\n",p[i].t);
	}
	getch();
}
