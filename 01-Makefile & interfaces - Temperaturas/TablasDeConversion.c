
#include <stdio.h>
#include "Conversion.h"

int main(void){
 printf("Fahrenheit A Celsius\n");
 for(int fahr = 0; fahr <= 300; fahr = fahr + 20)
 printf("%3d %6.1f\n", fahr, Celsius(fahr) );
 printf("Celsius A Fahrenheit\n");
 for(double cels = (-17.8); cels <= (148.7); cels = cels + 11.1)
 printf("%5.1f %9.0f\n", cels, Fahrenheit(cels));
 return 0;
}
