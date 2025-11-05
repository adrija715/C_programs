//WAPC to find the gender ratio based on the number of males and number of females entered as inputs.
#include <stdio.h>
int main() 
{
    int males, females;
    float ratio;
    printf("Enter number of males: ");
    scanf("%d", &males);
    printf("Enter number of females: ");
    scanf("%d", &females);
    if (males == 0) 
    {
        printf("Gender ratio cannot be calculated (division by zero).\n");
    } 
else
    {
    ratio = ((float)females / males) * 1000;
    printf("Gender ratio (females per 1000 males) = %.2f\n", ratio);
    }
    return 0;
}
