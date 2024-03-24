#include <stdio.h>

int main()
{
    int arr[50], limit, location, i;

    printf("Enter number of elements : ");
    scanf("%d", &limit);

    printf("Enter array elements : ");
    for (i = 0; i < limit; i++)
        scanf("%d", &arr[i]);

    location=1;
    for(i = location-1; i < limit-1; i++)
        arr[i] = arr[i + 1];
    limit--;

    printf("Array after deletion : ");
    for (i = 0; i < limit; i++)
    {
        printf("%d ", arr[i]);
    }
}