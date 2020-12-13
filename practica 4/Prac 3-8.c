/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int c[10];

void sumar_vector(int a[10], int b[10]){
    int i;
    for(i=0; i<10; i++)
    {
       c[i]=a[i]+b[i];
    }
}
int main(){
    int a[10], i;
    int b[10];
    for(i=0; i<10; i++)
    {
    printf("ingrese los valores del vector a[%d]\n", i);
    scanf("%d", &a[i]);
    }
    for(i=0; i<10; i++)
    {
    printf("ingrese los valores del vector b[%d]\n", i);
    scanf("%d", &b[i]);
    }
    sumar_vector(a,b);

    printf("la suma de los dos vectores es\n");
    for(i=0; i<10; i++)
    {
        printf("c[%d] = %d\n", i, c[i]);
    }
    
    return 0;
}