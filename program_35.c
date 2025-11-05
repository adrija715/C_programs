//WAPC to display the following series of numbers: 1, 2, 4, 8, …, n-terms. Here, ‘n’ is user input
#include <stdio.h>
int main()
{
    int n, i;
    int term = 1;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Series: ");
    for(i = 1; i <= n; i++) 
	{
        printf("%d ", term);
        term *= 2;
    }
    return 0;
}
