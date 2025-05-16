/*To Accept & Display product details using structure(Call by Reference)*/
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
	void displayprod(struct product *p);
	clrscr();
	printf("Output=%d\n",sizeof(p));  //Output=34
	printf("To Accept Product Details\n");
	printf("Enter a Product Number\n");
	scanf("%d",&p.pno);
	printf("Enter a Product Name\n");
	flushall();
	gets(p.pname);
	printf("Enter a Quantity\n");
	scanf("%f",&p.q);
	printf("Enter a Price\n");
	scanf("%f",&p.price);
	displayprod(&p);
	getch();
}
void displayprod(struct product *p)
{
	(*p).t=(*p).q * p->price;
	printf("To Display Product Details\n");
	printf("PNo\tPName\tQuantity\tPrice\tTotal\n");
	printf("%d\t",(*p).pno);
	printf("%s\t",p->pname);
	printf("%0.1f\t\t",(*p).q);
	printf("%0.1f\t",p->price);
	printf("%0.1f\n",(*p).t);
}





