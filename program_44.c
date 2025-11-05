/*WAPC to input a positive integer. Check whether the number is abundant or not.
Abundant Number – A number for which the sum of proper divisors is greater than the
number. Example: 12 ? 1+2+3+4+6=16 > 12*/
#include <stdio.h>
int main() 
{
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 1; i <= n / 2; i++) 
    {
        if(n % i == 0)
            sum += i;
    }
    if(sum > n)
        printf("%d is an Abundant number.", n);
    else
        printf("%d is not an Abundant number.", n); 
   return 0;
}
