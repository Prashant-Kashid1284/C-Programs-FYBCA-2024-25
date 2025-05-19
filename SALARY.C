/*To Accpet Basic Salary & Calculate Gross Salary,Net Salary*/
struct salary
{
	float bs,gs,ns;
	struct addition
	{
		float ta,da,hra;
	}a;
	struct deduction
	{
		float pf,lic,pt;
	}d;
};
void main()
{
	struct salary s;
	clrscr();
	printf("Enter a basic Salary\n");
	scanf("%f",&s.bs); //bs=10000
	s.a.ta=0.1*s.bs;     //1000
	s.a.da=1.2*s.bs;     //12000
	s.a.hra=0.2*s.bs;    //2000
	s.gs=s.bs+s.a.ta+s.a.da+s.a.hra;     //gs=25000
	printf("Gross Salary=%0.1f\n",s.gs);
	s.d.pf=0.15*s.bs;   //1500
	s.d.lic=2000;
	s.d.pt=0.2*s.bs;	 //2000
	s.ns=s.gs-s.d.pf-s.d.lic-s.d.pt;   //25000-1500-2000-2000=19500
	printf("Net Salary=%0.1f\n",s.ns);
	getch();
}