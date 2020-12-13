/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
    int ct_bolsas;//cantidad bolsas
    float costo_p,porcentajeDesc,desc,tarifa_final,costoBolsas;
    char dep;

    printf("Departamentos:\n");
    printf("P: Perfumeria\n");
    printf("S: Salchichoneria\n");
    printf("C: Carniceria\n");
    printf("L: Limpieza\n");
    printf("A que departamento pertenece el producto?");
    scanf("%c",&dep);
    printf("Dame el costo del producto: ");
    scanf("%f",&costo_p);    
    printf("Cantidad de bolsas que requiere: ");
    scanf("%d",&ct_bolsas);
    
    switch (dep)
    {
    	case 'P':
    	          porcentajeDesc=0.20;
    	          break;
    	case 'S': 
    	          porcentajeDesc=0.40;
    	          break;
    	case 'C':
    		      porcentajeDesc=0.20;
    	          break;
    	case 'L':
    		      porcentajeDesc=0.35;
    	          break;
	}
    desc=costo_p*porcentajeDesc;
    costoBolsas= ct_bolsas*0.10;
    tarifa_final= costo_p - desc + costoBolsas;
    printf("\nCosto producto %.2f",costo_p);
    printf("\nDescuento %.2f",desc);
    printf("\nCosto de las bolsas %.2f",costoBolsas);
    printf("\nTarifa final: %.2f",tarifa_final);
	return 0;
}

