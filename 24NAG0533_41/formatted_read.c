#include <stdio.h>

int main()
{
	int id;
	char name[10];
	double sal;

	FILE *fptr = fopen("data.txt", "r");
	if(NULL ==fptr)
	{
		printf(" Error file does not exit : \n");
		return 1;

	}
	while((fscanf(fptr, "%d %s %lf", &id, name, &sal)) != EOF)
	{
		printf(" ID : %d  \n", id);
		printf(" Name : %s \n",name);
		printf(" Salary : %.2lf \n",sal);
	}
	fclose(fptr);
	return 0;
}
