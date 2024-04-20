#include <stdio.h>
#define COLS 80
int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("error");
		return 1;
	}
	FILE *file = fopen(argv[1],"rt");
	if(NULL == file)
	{
		printf("error %s does not exist....!",argv[1]);
		return 2;
	
	}

	char line[COLS];
	int count;
	while ((fgets(line, COLS, file)) != NULL)
	{
		printf("%s", line);
		count++;
		if(count > 22)
		{
			getchar();
			count=0;
		}
	}
	fclose(file);
	return 0;
}

