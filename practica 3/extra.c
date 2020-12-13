/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
	double phi=1.6;
	int i,n;
	printf("dame el valor de n");
	scanf("%d",&n);
	
	for (i=1 ; i<=n; i++)
	{
		phi= 1 + 1/phi;
		printf("%.10lf\n",phi);
	}
	
}
