#include<stdio.h>

int main()
{
    int i,j,range,range1,range2;
    int arr[100],arr1[100],arr2[100];

    printf("enter the number of element of first array : ");
    scanf("%d",&range1);

    printf("enter the elements : ");
    for(i=0;i<range1;i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("entered elements of first array are : ");
    for(i=0;i<range1;i++)
    {
        printf("%d \t",arr1[i]);
    }
    printf("\n");

    printf("enter the number of element of second array : ");
    scanf("%d",&range2);

    printf("enter the elements : ");
    for(i=0;i<range2;i++)
    {
        scanf("%d",&arr2[i]);
    }

    printf("entered elements of second array are : ");
    for(i=0;i<range2;i++)
    {
        printf("%d \t",arr2[i]);
    }

    printf("\n");
    range=range1+range2;

    printf("merged array is : ");
    for(i=0;i<range1;i++)
    {
        arr[i]=arr1[i];
    }
    for(i=0,j=range1;j<range && i<range2;i++,j++)
    {
        arr[j]=arr2[i];
    }
    for(i=0;i<range;i++)
    {
        printf("%d \t",arr[i]);
    }
}