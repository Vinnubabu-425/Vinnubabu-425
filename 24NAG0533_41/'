#include <stdio.h>
#define COLS 80
int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Error ...! ./a.out <filename> \n");
		return 1;
	}
	FILE *file = fopen(argv[1],"rt");
	if(NULL == file)
	{
		printf("error could not create the file....!");
		return 2;
	
	}

	char line[COLS];
	int count;
	
	for(int i=0;i<5;i++)
	{
		fgets(line,COLS,stdin);
		fputs(line,file);
	}


	fclose(file);
	return 0;
}
