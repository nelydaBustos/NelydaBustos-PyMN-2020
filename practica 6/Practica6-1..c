#include <stdio.h>
#include <math.h>

float f(float x)
{
  float y;
  //y= (8*sin(x)*exp(-x))-1;
  y= 2*x*x*x-11*x*x+17.7*x-5;
  return y;
}
float fd(float x)
{
   float y;
   //y = (8*exp(-x)*cos(x))-(8*exp(-x)*sin(x));
   y=6*x*x-22*x+17.7;
  return y;
}

float newtonRaphson(float X0,int iter)
{
   int i=0;
   float xi, xi_m1,erp;
   xi=X0;
   printf("i \t Xi \t\t Xi+1 \t\t Err\n");
   do
   {
      xi_m1= xi - f(xi)/fd(xi);
      erp= fabs((xi_m1-xi)/xi_m1)*100;
      printf("%i \t %.8f \t %.8f \t %.8f \n",i,xi,xi_m1,erp);
      i++;
      xi=xi_m1;
   }while(i<iter);
   return xi_m1;
}

int main ()
{
    float X0=0.3;
    int iter=5;
    float raiz;
    raiz=newtonRaphson(X0,iter);
    printf("\n\n");
	return 0;
}

