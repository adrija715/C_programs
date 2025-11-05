//WAPC to find the volume of cylinder based on user inputs
#include <stdio.h>
#define PI 3.142
int main()
{
float radius, height, cylinderVolume;
printf("\nEnter radius and height: ");
scanf("%f %f", &radius, &height);
cylinderVolume = PI * radius * radius * height;
printf("\nVolume of cylinder is %.2f", cylinderVolume);
return 0;
}
