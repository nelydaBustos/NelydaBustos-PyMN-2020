/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int y,x,num;
    int z,i=1;
    x=0;
    y=1;
    z=0;
    printf("Digite el numero");
    scanf("%d",&num);
    
    for(i=1;i<num;i++){
        z=x+y;
       printf("%d",z);
        x=y;
        y=z;
    printf("\n");
        
    }

    return 0;
}

