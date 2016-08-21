#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Density(){ 
float mass; 
float volume;
float density;
 
printf("Type in mass in grams\n");
scanf("%f", &mass); 
printf("Type in volumes in cm cubic\n");
scanf("%f" &volume);
density = mass / (float)volume;

printf("Denisty is %f\n", density);

return 0;
}
