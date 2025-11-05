/*WAPC to input two sorted integer arrays from the user. Merge these two arrays into a
single sorted array.*/
#include <stdio.h>
int main() 
{
    int n1, n2, i, j, k;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int a[n1], b[n2], c[n1 + n2];
    printf("Enter %d sorted elements for first array:\n", n1);
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter %d sorted elements for second array:\n", n2);
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    i = j = k = 0;
    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while(i < n1)
        c[k++] = a[i++];
    while(j < n2)
        c[k++] = b[j++];
    printf("Merged sorted array: ");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);
    return 0;
}
