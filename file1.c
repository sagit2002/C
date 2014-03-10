#include<stdio.h>
main()
{
	char c;
	FILE *ptr1,*ptr2;
	ptr1=fopen("a.dat","r");
	ptr2=fopen("b.dat","w");
	while((c=fgetc(ptr1))!=EOF)
		fputc(c,ptr2);
}
