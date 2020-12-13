/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int
main ()
{
  char d[4];
  int cifras;

  do
    {
      printf ("Dame un numero de 4 digitos: ");
      scanf ("%s", d);	//leer un string
      printf ("La cadena es %s \n", d);
      cifras = strlen (d);
      if (cifras != 4)
	printf ("Error, debe ser de 4 cifras\n");

    }
  while (cifras != 4);

  if (d[0]!=d[1] && d[0]!=d[2] && d[0]!=d[3] && d[1]!=d[2] && d[1]!=d[3] && d[2]!=d[3] && d[3]!=d[2])
      printf("codigo valido\n");
      else printf("codigo no valido");
}
  
