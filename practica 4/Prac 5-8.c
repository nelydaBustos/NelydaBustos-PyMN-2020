/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int a[3][3];
void capturarArreglo()
{
    int i, j;
    for(i=0; i<3; i++)
    {
         for(j=0; j<3; j++)
         {
           printf("ingrese los valores del arreglo a[%d][%d]\n", i, j);
           scanf("%d", &a[i][j]);
         }
    }
}
void imprimirArreglo(){
    int i, j;
    printf("Los valores del arreglo a:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
        printf("%d, ", a[i][j]);
        }
         printf("\n");
    }
    
}
int main()
{
   capturarArreglo();
   imprimirArreglo();

    return 0;
}

