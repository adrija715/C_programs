//WAPC to display prime numbers within a range entered by the user using function.
#include <stdio.h>
int isPrime(int num)
 {
   int i;
    if(num < 2)
	 return 0;
    for( i = 2; i <= num / 2; i++)
        if(num % i == 0)
            return 0;
    return 1;
}
int main()
 {
    int i, start, end;
    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d:\n", start, end);
    for( i = start; i <= end; i++)
	 {
        if(isPrime(i))
            printf("%d ", i);
     }
    return 0;
}
