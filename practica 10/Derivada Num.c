// Programa donde se calcula una derivada numerica de orden h2 hacia adelante
#include <stdio.h>
#include<math.h>

// Declarar la funcion de derivacion hacia adelante
float DerivAdelante(float xi, float h);
//Declaramos las variables para ejecutar la funcion en el programa
float derivAtras( float xi, float h);
float derivCentrada(float xi, float h); 
float xi,h;

int main()
{
    xi=0.6; h=0.5;
    float valorVerdadero=0.2489;
    float valorCalculado;
    float erp; 
    char opcion;
    printf("Bienvenido, calculando la derivada de f(x)=1-e^(-x/0.2) en el punto xi=0.6\n");
    //printf("El valor para h=%f es: %f",h,DerivAdelante(xi,h));

    printf("MENU\n");
    printf("a) Diferenciación hacia adelante con 2 términos\n");
    printf("b) Diferenciación hacia atrás con 2 términos\n");
    printf("c) Diferenciación centrada con los 4 términos\n");
    scanf("%c", &opcion);
    printf("Incremento\tDiferenciacion\t\tResultado\t\tErp\n");
    switch (opcion) 
    {
        case 'a':
        case 'A':
               valorCalculado=DerivAdelante(xi,h);
               erp= ((valorVerdadero-valorCalculado)/valorVerdadero)*100;
               printf(" %.2f \t\tAdelante\t\t\t %.4f \t\t %.4f \n",h,valorCalculado,erp);
               printf("\t\tAtras \n");
               printf("\t\tCentrada \n");
                break;
        case 'b':
        case 'B':
                valorCalculado=derivAtras(xi,h);
                erp= ((valorVerdadero-valorCalculado)/valorVerdadero)*100;
                printf("\t\tAdelante \n"); 
                printf(" %.2f \t\tAtras\t\t\t %.4f \t\t %.4f \n",h,valorCalculado,erp);
               
               printf("\t\tCentrada \n");
                break; 
        case 'c':
        case 'C':
               valorCalculado=derivCentrada(xi,h);
               erp= ((valorVerdadero-valorCalculado)/valorVerdadero)*100;
               printf("\t\tAdelante \n");
               printf("\t\tAtras\n");    
               printf(" %.2f \t\tCentrada\t\t %.4f \t\t %.4f \n",h,valorCalculado,erp);
                break;     


    }

}

float f(float x)
{
  return 1-exp(-x/0.2);

}

 float DerivAdelante(float xi, float h){
    float y, ximas1, ximas2;
    ximas1= xi + h;
    ximas2= xi + 2*h;
    
    y= (-f(ximas2) + 4*f(ximas1) - 3*f(xi))/(2*h);
    return  y;
}

float derivAtras( float xi, float h)
{
   float y, ximenos1, ximenos2;
   ximenos1= xi - h;
   ximenos2= xi - 2*h; 
   y= (3*f(xi)-4*f(ximenos1)+f(ximenos2))/(2*h);
   return y;
}
float derivCentrada(float xi, float h)
{
    float y, ximenos1, ximenos2, ximas1 , ximas2;
    ximenos1= xi - h;
    ximenos2= xi - (2*h); 
    ximas1= xi + h; 
    ximas2=xi + (2*h); 
    y=(-f(ximas2)+8*f(ximas1)-8*f(ximenos1)+f(ximenos2))/(12*h);
    return y;
}
