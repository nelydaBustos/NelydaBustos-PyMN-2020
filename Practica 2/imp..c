/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include  <stdio.h>

int main ()
{
	int ingresos;
	char estadoCivil;
	float imp,tf_impuesto;
	printf("Dime tu estado civil: C=Casado o S=Soltero");
	scanf("%c",&estadoCivil);
	printf("Cual es tu ingreso: ");
	scanf("%d",&ingresos);
	if (estadoCivil=='C') 
	{
		if ( ingresos<64000)
		{
			imp=0.10 ;
		}
		else
		{
			imp=0.25; 
		}
	}
	
	if (estadoCivil=='S') 
	{
		if (ingresos>32000)
		{
			imp=0.25;
		}
		else
		{
			imp=0.10;
		}
	}
	
	tf_impuesto= ingresos*imp;
	
	printf("\nEl estado civil es %c",estadoCivil);
    printf("\nEl ingreso es %d", ingresos);
    printf("\nEl porcentaje de impuesto es %.2f",imp);
    printf("\nEl impuesto es de %.2f",tf_impuesto);
		return 0;
}

