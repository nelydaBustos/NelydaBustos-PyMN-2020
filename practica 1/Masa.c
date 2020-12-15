/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float w;
float m;
float g=9.8;

int main()
{
    printf("ingrese su masa en kg");
    scanf("%f",&m);
    (w=m*g);
    printf("La fuerza es %.2f", w);
    

    return 0;
}
