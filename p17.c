#include <stdio.h>

int main()
{
    int array[100];
    int range, count = 0;
    int i, j;
    printf("enter the number of element :");
    scanf("%d", &range);
    
    printf("enter the elements : ");
    for (i = 0; i < range; i++)
    {
        scanf("%d", &array[i]);
    }
    
    for (i = 0; i < range; i++)
    {
        for (j = i + 1; j < range; j++)
        {
            if (array[i] == array[j])
            {
                count++; 
                break;
            }
        }
    }
    printf("Total number of duplicate elements is : %d ", count);
}