//WAPC to input a positive integer. Check and print if the number is perfect or not. Note: Perfect number is a number which is equal to the sum of all its proper divisors (excluding itself). Example: 28 = 1 + 2 + 4 + 7 + 14
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
    if(sum == n)
        printf("%d is a Perfect number.", n);
    else
        printf("%d is not a Perfect number.", n);
    return 0;
}
