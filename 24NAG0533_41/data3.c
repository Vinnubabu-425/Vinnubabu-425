#include <stdio.h>

enum week{MOnday, Tuesday, Wednesday, THursday, Friday, Saturday, Sunday};
int main()
{
	enum week day;
	
	for(int i=0;i<=6;i++)
	{
		scanf(" %d \n", &day);
	       	printf("%d\n",day);
	}
	return 0;
}
