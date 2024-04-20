#include <stdio.h>
#include <stdlib.h>
int main(){
    

	FILE *file_ptr;
// open the file first
 
	file_ptr = fopen("charread.c","r");
	if(file_ptr == NULL)
{
              printf("File does not exist .\n");
              return 1;
    
}
        char ch;
        while((ch= fgetc(file_ptr)) != EOF) {
	  putchar(ch);
        //     if(fopen(file_ptr)) break;
	}


       fclose(file_ptr) ;
       return 0;
}
