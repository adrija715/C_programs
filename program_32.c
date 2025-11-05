//WAPC to input a positive integer from the user. Find and display the number of digits in the number, sum of the digits of the number and product of the digits of the number.
#include <stdio.h>
int main() 
{
    int n, count = 0, sum = 0, product = 1, digit, temp;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    temp = n;
    while(temp > 0) {
        digit = temp % 10;
        sum += digit;
        product *= digit;
        count++;
        temp /= 10;
    }
    printf("Number of digits: %d\n", count);
    printf("Sum of digits: %d\n", sum);
    printf("Product of digits: %d\n", product);
    return 0;
}
