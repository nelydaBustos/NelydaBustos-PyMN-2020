/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int a[10], b[10], i;
void generarVector(){
    for(i=0; i<10; i++)
    {
       a[i]=rand() % 100;
       b[i]=rand() % 100;
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
   generarVector();
   imprimirVector();

    return 0;
}  


