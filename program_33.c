//WAPC to display the first ‘n’ natural numbers where ‘n’ is the user input.
#include <stdio.h>
int main()
 {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("First %d natural numbers: ", n);
    for(i = 1; i <= n; i++)
        printf("%d ", i);
    return 0;
}
