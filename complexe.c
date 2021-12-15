#include<math.h>
#include"complexe.h"
complexe nouveaucomplexe(double r, double i)
{
complexe z;
z.re= r;
z.im= i;
return z;
}
complexe plus(complexe z1, complexe z2)
{
return nouveaucomplexe(z1.re+z2.re,z1.im+z2.im);
}
complexe moins(complexe z1, complexe z2)
{
return nouveaucomplexe(z1.re-z2.re,z1.im-z2.im);
}
double module(complexe z)
{
return sqrt(z.re*z.re+z.im*z.im);
}
double argument(complexe z)
{
return atan(z.im/z.re);
}
