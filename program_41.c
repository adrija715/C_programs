/*WAPC to input a positive integer. Check whether it is Niven or not. Note: Niven number
– A number divisible by the sum of its digits. Example: 18 ÷ (1+8) = 2*/
#include <stdio.h>
int main()
 {
    int n, temp, digit, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    temp = n;
    while(temp > 0) 
   {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    if(n % sum == 0)
        printf("%d is a Niven number.", n);
    else
        printf("%d is not a Niven number.", n);
   return 0;
 }
