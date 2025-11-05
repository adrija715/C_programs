/*WAPC to input a positive integer. Check whether it is Automorphic or not. Note: A
number whose square ends with the number itself is an Automorphic number. Example:
25² = 625 (ends with 25)*/
#include <stdio.h>
#include <math.h>
int main() 
{
    int n, sq, temp, digits = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
	sq = n * n;
    temp = n;
    while(temp > 0)
    {
        digits++;
        temp /= 10;
    }

    int lastDigits = sq % (int)pow(10, digits);
    if(lastDigits == n)
        printf("%d is an Automorphic number.", n);
    else
        printf("%d is not an Automorphic number.", n);
    return 0;
}
