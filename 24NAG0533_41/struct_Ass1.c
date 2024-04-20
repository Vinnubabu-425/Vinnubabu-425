#include <stdio.h>
typedef struct complex {
float real;
float imag;
} complex;

complex add(complex n1, complex n2);
complex sub(complex n1, complex n2);

int main() {
    complex n1, n2, result,result2;
    printf("\ncomplex number - 1 : \n");
    printf("--------------------\n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\ncomplex number - 2:\n");
    printf("--------------------\n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);
    result = add(n1, n2);
    printf("Addition = %.1f + %.1fi", result.real, result.imag);
    result2 = sub(n1, n2);
    printf("\nSubtraction = %.1f - %.1fi",result2.real, result2.imag );
    return 0;
}

complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}
complex sub(complex n1, complex n2){
    complex temp2;
    temp2.real = n1.real - n2.real;
    temp2.imag = n1.imag - n2.imag;
    return temp2;
    
 }
