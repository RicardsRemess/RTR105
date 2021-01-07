#include <stdio.h>
#include <math.h>

float a, b, y, x, d1x, d2x, delx, d1xAnalytical, d1xFront, d2xAnalytical;
FILE *fp = NULL;
main ()
{
  printf ("Ievadi sakuma vertibu: ");
  scanf ("%f", &a);
    printf ("Ievadi beigu vertibu: ");
  scanf ("%f", &b);
    printf ("Ievadi precizitati: ");
  scanf ("%f", &delx);
  
  x=a;
  
  fp = fopen("derivative.dat" ,"w");
  fprintf(fp, "y,d1xAnalyt,d1x,d2xAnalyt,d2x\n");
  while(x<b){
      y = sinh(x/2);
      d1x = (sinh((x+delx)/2)-y)/delx;
      d1xAnalytical = cosh(x/2)/2;
      d1xFront = (sinh((x+2*delx)/2)-sinh(x+delx/2))/delx;
      d2x = (d1x-d1xFront)/delx;
      d2xAnalytical = sinh(x/2)/4;
      fprintf(fp, "%f,%f,%f,%f,%f\n", y, d1xAnalytical, d1x, d2xAnalytical, d2x);
      x += delx;
      
  }
  
  
  
  return 0;
}

