
#include <stdio.h>
#include <math.h>

float a, b, y, x, integralRect,integralTrap,integralSimpson, dx, fx ,fxf;

main ()
{
  printf ("Ievadi sakuma vertibu: ");
  scanf ("%f", &a);
    printf ("Ievadi beigu vertibu: ");
  scanf ("%f", &b);
    printf ("Ievadi precizitati: ");
  scanf ("%f", &dx);
  
x=a;
  
  while(x<b){
    fx = sinh(x/2);
    fxf = sinh((x+dx)/2);
    integralRect += fx*dx;
    integralTrap += (fx+fxf)/2*dx;
    integralSimpson += (fx+4*sinh((2*x+dx)/4)+fxf)/6*dx;
    x += dx; 
  }
  
  printf("Taisnsturu metode: %f\nTrapecu metode: %f\nSimpsona metode: %f", integralRect, integralTrap, integralSimpson);
  
  return 0;
}
