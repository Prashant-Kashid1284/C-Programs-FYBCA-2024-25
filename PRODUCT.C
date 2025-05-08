/*To Accept & Display product details using structure(Non-Homogenous)*/
#include<stdio.h>
struct product
{                                       //Non-Homegenous(different)
	int pno;		      //integer value
	char pname[20]; 		//string value
	float q,price,t;
};
void main()
{
	struct product p;	//p is a structure variable
	clrscr();
	printf("Output=%d\n",sizeof(p));  //Output=34
	printf("Enter a Product Number\n");
	scanf("%d",&p.pno);
	printf("Enter a Product Name\n");
	flushall();
	gets(p.pname);
	printf("Enter a Quantity\n");
	scanf("%f",&p.q);
	printf("Enter a Price\n");
	scanf("%f",&p.price);
	p.t=p.q*p.price;
	printf("PNo\tPName\tQuantity\tPrice\tTotal\n");
	printf("%d\t",p.pno);
	printf("%s\t",p.pname);
	printf("%0.1f\t\t",p.q);
	printf("%0.1f\t",p.price);
	printf("%0.1f\n",p.t);
	getch();
}










