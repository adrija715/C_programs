//WAPC to input an integer array from the user. Sort the array in ascending order using selection sort technique.
#include <stdio.h>
int main() 
{ 
    int n, i, j, temp, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < n - 1; i++)
	 {
        min = i;
        for(j = i + 1; j < n; j++)
	    {
            if(arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
     }
    printf("Array sorted in ascending order: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
