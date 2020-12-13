#include <stdio.h>
#include <math.h>

float f(float x)
{
   float y;
    //y= (8*sin(x)*exp(-x))-1;
    y= 2*x*x*x-11*x*x+17.7*x-5;
   return y;
}

float MetodoSecante(float x0,float x1, int iter)
{
   int i=1;
   float xi, xi_m1,xi_1,erp;
   float fd;
   printf("i \t Xi \t\t Xi-1 \t\t Xi+1 \t\t ~=f'(x) \t Err\n");
   xi=x1;
   xi_1=x0;
   do
   {
      xi_m1= xi - (f(xi)*(xi_1-xi))/(f(xi_1)-f(xi));
      erp= fabs((xi_m1-xi)/xi_m1)*100;
      fd= (f(xi_1)-f(xi))/(xi_1-xi);
      printf("%i \t %.8f \t %.8f \t %.8f \t%.8f \t %.8f\n",i, xi, xi_1, xi_m1, fd, erp);
      xi_1=xi;
      xi=xi_m1;
      i++;
   }while(i<=iter);
   return xi_m1;
}

int main ()
{
	float x0=0.3, x1=0.5,raiz;
    int iter=5;

    raiz=MetodoSecante(x0,x1,iter);


	return 0;
}