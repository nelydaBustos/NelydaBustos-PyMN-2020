/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int sumar_vector(int a[10]){
    int i, suma=0;
    for(i=0; i<10; i++)
    {
       suma=suma+a[i];
    }
    return suma;
}
int main(){
    int a[10], i, suma;
    for(i=0; i<10; i++)
    {
    printf("ingrese los valores del vector a[%d]\n", i);
    scanf("%d", &a[i]);
    }
    suma= sumar_vector(a);

    printf("la suma de los valores del vector es: %d", suma);
    
    
    return 0;
}