//WAPC to check if a triangle is valid or not. If it is valid, check and print if it is isosceles, scalene or equilateral.
#include <stdio.h>
int main()
 {
    int a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
	 {
        printf("The triangle is valid.\n");
        if (a == b && b == c)
            printf("It is an Equilateral triangle.\n");
        else if (a == b || b == c || a == c)
            printf("It is an Isosceles triangle.\n");
        else
            printf("It is a Scalene triangle.\n");
    } 
    else
    {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
