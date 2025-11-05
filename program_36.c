//WAPC to input a positive integer from the user. Check and print if the number is palindrome or not. Note: A palindrome number is a number that remains the same when its digits are reversed, for example, 121.
#include <stdio.h>
int main() 
{
    int n, reversed = 0, digit, temp;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    temp = n;
    while(temp > 0)
    {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    if(reversed == n)
        printf("%d is a Palindrome number.", n);
    else
        printf("%d is not a Palindrome number.", n);
    return 0;
}
