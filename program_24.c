//WAPC to check if a number is of 3-digits and divisible by 3.
#include <stdio.h>
int main()
 {  
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 999)
    {
        if (num % 3 == 0)
            printf("%d is a 3-digit number and divisible by 3.\n", num);
        else
            printf("%d is a 3-digit number but not divisible by 3.\n", num);
    } 
    else
    {
        printf("%d is not a 3-digit number.\n", num);
    }
     return 0;
}
