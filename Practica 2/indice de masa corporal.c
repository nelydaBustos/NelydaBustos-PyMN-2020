/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
   float peso,estatura,imc;
   printf("¿Cual es tu peso?");
   scanf("%f",&peso);
   printf("¿Cual es tu estatura?");
   scanf("%f",&estatura);
   imc=(peso/(estatura*estatura));  
   
   if (imc<18.5)
   {
   	    printf("Peso bajo");
   }
    if (imc>=18.5 && imc<=24.9)
   {
   	    printf("Peso Normal");
   }
    if (imc>=25.0 && imc<=29.9)
   {
       printf("Sobrepeso");
   }
    if (imc>=30 && imc<=34.5)
   {
   	   printf("Obesidad tipo 1");
   }
    if (imc>=35 && imc<=39.9)
   {
   	    printf("Obesidad tipo 2");
   }
    if(imc>=40)
   {
        printf("\nHiper obesidad");	
   }         
  

   return 0;
}
