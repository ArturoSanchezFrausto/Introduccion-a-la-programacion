#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
const float g=9.81;
float H=12;
int variable;
void funcion(){
  static int cuenta=0;
  cuenta=cuenta+1;
     printf("funcion():%f\ncuenta=|%-5d|\n", H, cuenta);
     }
int main(int argc, char *argv[])
{
    variable=10;
    printf ("Variable=%d\n", variable);
  float area;
  float radio;
  funcion();
  dummy();
  printf("H=%f\nIngrese el valor del radio de una\
  circunferencia:\n",H);
  H=12.1;
  printf("|%-10.f|\n", H);
  funcion();
 // scanf ("%f", &radio);
  //printf("El área de la circunferencia es: %f \n", PI*radio*radio);
  system("PAUSE");	
  return 0;
}
