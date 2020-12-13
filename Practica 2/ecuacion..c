/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    float R,x1,x2;
    printf("Dame un valor para a");
    scanf("%d",&a); 
    printf("Dame un valor para b");
    scanf("%d",&b);
    printf("Dame un valor para c");
    scanf("%d",&c);
    d=((b*b)-4*a*c);
    R=(sqrt(d));
    if(d<0)
    { 
    printf("error:las soluciones no son reales");
    }
    else
    {
    x1=((-b+R)/2*a);
    x2=((-b-R)/2*a);
    printf("Tus resultados son %1.2f, %1.2f", x1,x2);
    }

    return 0;
}
