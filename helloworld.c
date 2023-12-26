#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (void){

    int num = 42;
    float pi = 3.41;
    char letra = 'C';
    char nome[] = "Bruno";
    int hexadecimal = 25;
    int octal = 64;
printf("Hello World:\n");
printf("O valor do numero e %d\n", num);
printf("O valor de PI e %.2f\n", pi);
printf("O caracter e %c\n", letra);
printf("O nome e %s\n", nome);
printf("O valor hexadecimal e %x\n", hexadecimal);
printf("O valor octal e %o\n", octal);
    
    getch();
}