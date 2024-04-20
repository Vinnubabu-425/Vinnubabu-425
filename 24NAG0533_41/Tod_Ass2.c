#include <stdio.h>
#include <stdlib.h>


int getValueofS(int *p){
    *p = 5;
    return 0;
}

int ptrptr(int **p){
     **p = 50;
    return 0;
}

int main(int argc, char *argv[]){
    
    if(argc!=2){
        printf(" Usage: ./a.out <value> ");
        return 1;
    }

    int x = atoi(argv[1]);
    printf(" x = %d \n",x);
    getValueofS(&x);
    printf(" x = %d \n",x);
    int *px = &x;
    ptrptr(&px);
    printf(" x = %d \n",x);
    
return 0;

}
