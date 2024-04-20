#include <stdio.h>
#include <stdlib.h>

void print(void *param, int x)
{
    if (x == 1)
    {
        char *cp = (char *)param;
        printf("   %c\n", *cp);
    }
    else if (x == 2)
    {
        int *ip = (int *)param;
        printf("       %d \n", *ip);
    }
    else
    {
        float *fp = (float *)param;
        printf("              %f\n", *fp);
    }
}

int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        printf("Usage: %s <grade> <value> <pi>\n", argv[0]);
        return 1;
    }

    char *grade = argv[1];
    int val = atoi(argv[2]);
    float pi = atof(argv[3]);

    print(grade, 1);
    print(&val, 2);
    print(&pi, 3);

    return 0;
}
