
#include <stdio.h>
#include <math.h>
char text[64];
float x;
//int k;
float R;
float a;
float result = 0;
main ()
{
  printf ("Sin aprekinasana:\nIevadi x vertibu: ");
  scanf ("%s", text);
  sscanf (text, "%f", &x);
  printf ("sinh(x/2)=%f", sinh (x / 2));
  printf ("\
         500            \n\     
         ____                           \n\
         \\                      \n\
          \\      2*k+1                     \n\ 
           \\    x                     \n\
sinh(x/2) =   >   __________________    \n\
           /              2*k+1            \n\
          /     (2*k+1)!*2                    \n\
         /___                       \n\
         k=0    \n\
");

printf ("\
                     \n\     
                                    \n\
                               \n\
                             2     \n\ 
                            x          \n\
rekurences reizinatajs = ________    \n\
                                     \n\
                         (2k+1)8k       \n\
                                \n\
             \n\
");
    a = x/2;
    result = a;
    printf("a0=%f S0=%f\n", a,result);
    
    for(int k=1;k <=500;k=k+1){
        R=(x*x)/(8*(2*k+1)*k);
        if(k==499){
           printf("a499=%f S499=%f\n", a,result); 
        }
        result = result + a*R;
        //printf("%f", result);
        a = R;
        
    }
    printf("a500=%f S500=%f\n", a,result); 
    printf("sinh(x/2) no Teilora rindas = %f", result);
  return 0;
}
