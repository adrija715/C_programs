/*WAPC to input a positive integer. Check whether the number is Sunny or not. Note:
Sunny Number – A number for which the next number is a perfect square. Example: 8
(since 8+1=9 which is 3²)*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int root = sqrt(n + 1);
    if(root * root == n + 1)
        printf("%d is a Sunny number.", n);
    else
        printf("%d is not a Sunny number.", n);
    return 0;
}
