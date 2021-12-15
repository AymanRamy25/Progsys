#include<stdlib.h>
#include<stdio.h>
#include"complexe.h"
int main()
{
complexe z1,z2,z3;
z1=nouveaucomplexe(1.,0.);
z1=nouveaucomplexe(0.,1.);
z3=plus(z1,z2);
printf("Module de z3 : %f",module(z3));
printf("Module de z3 : %f",argument(z3));
return EXIT_SUCCESS;
}
