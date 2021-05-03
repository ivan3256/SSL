#include <stdio.h>
#include "Conversion.h"
#include <assert.h>
#include <math.h>

int main(){
assert(round(Celsius(0))==(-18));
assert(round(Celsius(20)) == (-7));
assert(round(Celsius(100)) == 38);
assert(round(Celsius(280)) == 138);
assert(round(Celsius(300)) == 149);
assert(round(Fahrenheit(-17.8)) == 0);
assert(round(Fahrenheit(-6.7)) == 20);
assert(round(Fahrenheit(37.7)) == 100);
assert(round(Fahrenheit(148.7)) == 300);
}
