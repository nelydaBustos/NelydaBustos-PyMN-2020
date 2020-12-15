/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
const double pi=3.1416;
double r; 
double volumen; 
int main(){
    
    printf("Dame el valor de r");
    scanf("%lf", &r);
    (volumen=(4/3)*pi*r*r*r);
    printf("El volumen de la esfera es %lf", volumen);
    return 0;
}
