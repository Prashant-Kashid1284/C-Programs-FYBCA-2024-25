/*To Calculate Total Marks of 5 Subject & Display Percentage,Grade*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int m1,m2,m3,m4,m5,t;
  float per;                 //Declaration Part
  clrscr();
  printf("Enter Marks of 5 Subjects\n");
  scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);   //Input
  t=m1+m2+m3+m4+m5;
  per=(float)t/5;
  printf("Total Marks=%d\n",t);
  printf("Percentage=%0.2f\n",per);
  if(m1<40 || m2<40 || m3<40 || m4<40 || m5<40)
  {
    printf("Fail\n");
  }
  else
  {
    if(per>=91)
    {
      printf("O Grade\n");
    }
    else
    {
      if(per>=75 && per<91)
      {
	printf("A+ Grade\n");
      }
      else
      {
	if(per>=60 && per<75)
	{
	  printf("A Grade\n");
	}
	else
	{
	  if(per>=55 && per<60)
	  {
	    printf("B+ Grade\n");
	  }
	  else
	  {
	    if(per>=50 && per<55)
	    {
	      printf("B Grade\n");
	    }
	    else
	    {
	      if(per>=45 && per<50)
	      {
		printf("C Grade\n");
	      }
	      else
	      {
		if(per>=40 && per<45)
		{
		  printf("D Grade\n");
		}
		else
		{
		  printf("F Grade\n");
		}
	      }
	    }
	  }
	}
      }
    }
  }
  getch();
}










