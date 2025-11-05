/*WAPC to input an array of ‘n’ elements from the user. Find and display the second
highest element of the array.*/
#include <stdio.h>
int main() 
{
    int n, i, max1, max2;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    max1 = max2 = arr[0];
    for(i = 1; i < n; i++) 
	{
        if(arr[i] > max1) 
		{
            max2 = max1;
            max1 = arr[i];
        }
		 else if(arr[i] > max2 && arr[i] != max1) 
		{
            max2 = arr[i];
        }
    }
     printf("Second highest element = %d", max2);
    return 0;
}
