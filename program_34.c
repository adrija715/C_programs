//WAPC to display the sum of the first ‘n’ odd numbers and the sum of the first ‘n’ even numbers separately. Here, ‘n’ is the user input.
#include <stdio.h>
int main() 
{
    int n, i, sumOdd = 0, sumEven = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        sumOdd += (2 * i - 1);
        sumEven += (2 * i);
    }
    printf("Sum of first %d odd numbers = %d\n", n, sumOdd);
    printf("Sum of first %d even numbers = %d\n", n, sumEven);
    return 0;
}
