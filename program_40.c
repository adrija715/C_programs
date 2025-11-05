/*WAPC to input a positive integer. Check whether it is Kaprekar or not. Note: Kaprekar
Number – A number whose square can be split into two parts that add up to the number
itself. Example: 45² = 2025 ? 20 + 25 = 45*/
#include <stdio.h>
#include <math.h>
int main() 
{
    int n, sq, digits = 0, divisor, left, right;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    sq = n * n;
    int temp = n;
    while(temp > 0)
    {
        digits++;
        temp /= 10;
    }
    divisor = pow(10, digits);
    left = sq / divisor;
    right = sq % divisor;
    if(left + right == n)
        printf("%d is a Kaprekar number.", n);
    else
        printf("%d is not a Kaprekar number.", n);
    return 0;
}
