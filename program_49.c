/*WAPC to initialize the array with 10 integers of your choice. Input an integer from the
user. Check and display whether or not the input entered by the user is present in the
array or not. Use the binary search technique (Hint: Make sure the array elements are
sorted).*/
#include <stdio.h>
int main() 
{
    int arr[10] = {3, 8, 12, 15, 19, 25, 33, 40, 47, 50};
    int key, low = 0, high = 9, mid, found = 0;
    printf("Enter number to search: ");
    scanf("%d", &key);
    while(low <= high)
	 {
        mid = (low + high) / 2;
        if(arr[mid] == key) 
		{
		    found = 1;
            break;
        } else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
     }

    if(found)
        printf("%d is present in the array.", key);
    else
        printf("%d is not present in the array.", key);
    return 0;
}
