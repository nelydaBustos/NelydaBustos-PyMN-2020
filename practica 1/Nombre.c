/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float imc, estatura, peso;
int edad; 
int main(){
    char nombre[20];
    printf("¿Cual es tu nombre?");
    scanf("%s", &nombre);
    printf("¿cual es tu estatura?");
    scanf("%f",&estatura);
    printf("¿cual es tu peso?");
    scanf("%f", &peso);
    printf("¿cual es tu edad?");
    scanf("%d", &edad);
    imc=peso/(estatura*estatura);
printf("\ntu nombre es %s \ntu edad es %d \ntu estatura es %.2f \ntu peso es %.2f \n su imc es: %f", nombre,edad,estatura,peso,imc);

    return 0;
}
