#include<stdio.h>

main()
{
	char name[25];
	int eno,i,n;
	float basic;

	FILE *fp;
	fp=fopen("newfile", "w");
	
	printf("Enter the no of records:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("Enter name:");
		scanf("%s", name);
		printf("Enter employee no:");
		scanf("%d", &eno);
		printf("Enter basic:");
		scanf("%f", &basic);
		printf("\n");
		fprintf(fp,"%s %d %f",name,eno,basic);
	}
fclose(fp);
}

