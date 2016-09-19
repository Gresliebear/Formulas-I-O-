#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Notes 
When mentioning 'meaurse' or 'measurements' be mindful that there're different types of measurements
you could be measuring in milimeters or meters this is also refered to as Prefix Multipliers 


*/


/* Density Explanation 
	Density is mass in grams divided by cubic centimeter volume.
		Volume is a measure of space. 
			Height X Length X Width = Volume.
			Raise a unit by power of 3 it becomes a cubic Volume.
			1 milliliter equals 1 cubic centimeter.
		Mass is object is a measure of the quantity of matter.
			Be mindful that weight is object's gravitational pull.
			Mass is measured in grams.  
			Mass is extensive property, depends on amount of substance.
  		Density is a characteristic physical property of substances that depends on on temperature 
			Density is therefore a intensive property, one that is independent of the amount of a substance .
			Density of substance is the ratio of its mass (m) to its volume(V).
	if you don't understand density a common riddle is told to explain it.
		"Which weighs more, a ton of bricks or a ton of feathers?" 
			They both weigh the same! 
				if you say bricks you confused weight with density.
 */



/* Density command line input */
void Densitycl(){ 
float mass; 
float volume;
float density; 
printf("Type in mass in grams\n");
scanf("%f", &mass); 
printf("Type in volumes in cm cubic\n");
scanf("%f", &volume);
density = mass / (float)volume;
printf("Denisty is %f\n", density);
}

/* Density input/output file */
void DensityIO(){

float massarray;
float volumearray;
float density; 

FILE *m;
m = fopen("/Formulas-I-O-/Input/massinput.txt", "r");
fscanf(m, "%f", &massarray);
FILE *v;
v = fopen("/Formulas-I-O-/Input/volumeinput.txt","r" );
fscanf(v, "%f", &volumearray);
FILE *d;
d = fopen("/Formulas-I-O-/Output/densityOutput.txt", "w+"); 

density  = massarray / (float)volumearray;

fprintf(d, "%f", density);

fclose(d);
fclose(m);
fclose(v);
}
/* Temperature Scales */
