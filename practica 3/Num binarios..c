/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
   int num, r,c, j;
   int vector[1000],i=0;

   printf("Damen un numero ");
   scanf("%d",&num);
   c=num;
   while (c>0)
   {
         vector[i]= c % 2;
         c /= 2;
         ++i;
   }
    for(j= i - 1; j>=0; --j)
      printf("%d\n",vector[j]);
      printf("\n\n");
   
}

