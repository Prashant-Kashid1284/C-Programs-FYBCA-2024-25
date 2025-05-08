/*To Copy Number of Characters from one String to Another String Using SLF*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char src[20],dest[20];
	int n;
	clrscr();
	printf("Enter a String\n");
	gets(src);                 //Welcome
	printf("Enter How Many Characters to be Copied\n");
	scanf("%d",&n);     //n=3
	strncpy(dest,src,n);      //copy src(Welcome) into  dest(Wel)
	printf("Original String=%s\n",src);  //Welcome
	printf("Copied String=%s\n",dest);    //Wel
	getch();
}