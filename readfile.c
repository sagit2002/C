#include<stdio.h>

main()
{
	char name[25];
	int eno,i,n;
	float basic,hra,da;

	FILE *fp;
	fp=fopen("newfile","r");
	
	while(!feof(fp))
	{
		fscanf(fp,"%s %d %f",name,&eno,&basic);
		printf("Employee Name: %s\n",name);
		printf("Employee No: %d\n", eno);
		printf("Basic Pay: %f\n", basic);
		hra=0.2 * basic;
		printf("HRA: %.2f\n",da);
		da=0.2*basic;
		printf("DA: %.2f\n",da);
		printf("\n");
	}
fclose(fp);
}
