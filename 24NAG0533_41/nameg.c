#include <stdio.h>
int main()
{
        char name[100];
	scanf("%[^\n]%*c",name);
	printf("%s",name);
        return 0;	
}

