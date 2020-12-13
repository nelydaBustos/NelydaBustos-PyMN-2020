/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int a[10], b[10];
void capturarVectores()
{
    int i;
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
}
void imprimirVector(){
    int i;
    printf("Los valores del vector a:");
    for(i=0; i<10; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\nLos valores del vector b:");
    for(i=0; i<10; i++)
    {
        printf("%d, ", b[i]);
    }
}
int main()
{
   capturarVectores();
   imprimirVector();

    return 0;
}
