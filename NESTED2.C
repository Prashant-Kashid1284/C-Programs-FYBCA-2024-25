/*Example of Nested Structure[Outside of main()]*/
struct value
{	float b;
};
struct demo
{	char c;
	struct value v;
};
struct sample
{	int a;
	struct demo d;
};
void main()
{	struct sample s;
	clrscr();
	s.a=10;
	s.d.c='t';
	s.d.v.b=56.9;
	printf("Interge Value=%d\n",s.a);
	printf("float Value=%0.1f\n",s.d.v.b);
	printf("Character Value=%c\n",s.d.c);
	getch();
}