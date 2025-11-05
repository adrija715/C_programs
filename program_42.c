/*WAPC to input a positive integer. Check whether it is Happy or not. Note: Happy
Number – A number that eventually reaches 1 when replaced repeatedly by the sum of
the squares of its digits. Example: 19 ? 1²+9²=82 ? 8²+2²=68 ? 6²+8²=100 … ? 1*/
#include <stdio.h>
int main() 
{
    int n, temp, digit, sum;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 1 && temp != 4) 
  {    
       sum = 0;
        while (temp > 0)
       {
            digit = temp % 10;
            sum += digit * digit;
            temp /= 10;
        }
        temp = sum;
    }
    if (temp == 1)
        printf("%d is a Happy number.", n);
    else
        printf("%d is not a Happy number.", n);
    return 0;
}
