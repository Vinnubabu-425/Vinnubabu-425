#include <stdio.h>
int main(int argc, char *argv[]) // array of character pointers char *argv[]
// array of strings
{
        printf(" number of arguments : %d\n",argc);
        if( argc != 2 )         {
                printf(" Error: command is mycat <FileName> \n ");
                return 1;
        }
        FILE *inp = fopen(argv[1], "r");
        if(NULL == inp)         {
                printf(" Error in opening the file \n ");
                return 2;
        }
#if 0
        while(!feof(inp))         {
               char ch = fgetc(inp); // reading character by character
                printf("%c", ch);
        }
#else
        char ch;
        while ((ch = fgetc(inp)) != EOF)
                printf("%c", ch);
#endif
        puts("\n" );
        return 0;
}
