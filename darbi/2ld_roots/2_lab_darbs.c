
#include <stdio.h>
#include <math.h>

float a, b, c, x, dx;
int k = 0;
float shiftedFVal(float x, float c){
    return sinh(x/2)-c;
}

main ()
{
  printf ("Ievadi a vertibu: ");
  scanf ("%f", &a);
    printf ("Ievadi b vertibu: ");
  scanf ("%f", &b);
    printf ("Ievadi c vertibu: ");
  scanf ("%f", &c);
    printf ("Ievadi precizitati: ");
  scanf ("%f", &dx);
  
  if(shiftedFVal(a,c)*shiftedFVal(b,c)>0){
      printf("Para saknes vai nav saknes");
      return 1;
  }
  
  while((b-a)>dx){
      k++;
      x=(b+a)/2;
      if(shiftedFVal(a,c)*shiftedFVal(x,c)>0){
          a=x;
      }else{
          b=x;
      }
      printf("%d:",k);
      printf("%d\n",b-a);
  }
    printf("x aproksimācijas vērtība: %f\n", x);
    printf("x reala vērtība: %f\n", sinh(c/2));
    printf("iteraciju skaits: %d\n", k);
    
  
  
  return 0;
}
