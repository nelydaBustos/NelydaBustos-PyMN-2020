/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    long long int y,x,z;
    int num,i=1;
    double aureo;
    x=0; 
    y=1; 
    z=0; 
    printf("Digite el numero");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
	{   	
        z=x+y;
        aureo= (double)(z)/y;
        printf("%.10lf\n",aureo);
        x=y;
        y=z;
        printf("\n");   
    }

    return 0;
}
