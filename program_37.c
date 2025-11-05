/*WAPC to input a positive integer. Assume that the number is of 3 digits. Check and print if the number is Armstrong or not. Note: An Armstrong number is a number that is equal
to the sum of its own digits each raised to the power of the number of digits, for example, 153 = 1³ + 5³ + 3³.*/
#include <stdio.h>
#include <math.h>
int main()
 {
    int n, temp, digit, sum = 0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &n);
    temp = n;
    while(temp > 0) 
	{
        digit = temp % 10;
        sum += pow(digit, 3);
        temp /= 10;
    }

    if(sum == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);
     return 0;
}
