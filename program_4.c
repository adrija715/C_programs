//WAPC to input the coordinates of two points (x1, y1) and (x2, y2). Calculate the slope and display the same.
#include <stdio.h>
int main()
{
    float x1, y1, x2, y2, slope;
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);
	if (x2 - x1 == 0)
    {
	printf("The slope is undefined (vertical line).\n");
    }
    else
    {
    slope = (y2 - y1) / (x2 - x1);
    printf("The slope of the line joining the points is: %.2f\n", slope);
    }
    return 0;
}
