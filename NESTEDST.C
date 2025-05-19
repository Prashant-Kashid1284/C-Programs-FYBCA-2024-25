/*Example of Nested Structure*/
void main()
{
	struct sample
	{
		int a;
		struct demo
		{
			char c;
			struct value
			{
				float b;
			}v;
		}d;
	}s;
	clrscr();
	s.a=10;
	s.d.c='t';
	s.d.v.b=56.9;
	printf("Interge Value=%d\n",s.a);
	printf("float Value=%0.1f\n",s.d.v.b);
	printf("Character Value=%c\n",s.d.c);
	getch();
}