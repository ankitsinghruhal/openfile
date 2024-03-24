#include <stdio.h>
 
int main()
{
   int array[100], location, i, n, num;
   printf("Enter number of elements in array : ");
   scanf("%d", &n);
 
   printf("Enter the elements : ");
 
   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);
 
   location=1;
 
   printf("Enter the num to insert\n");
   scanf("%d", &num);
 
   for (i = n - 1; i >= location - 1; i--)
      array[i+1] = array[i];
 
   array[location-1] = num;
 
   printf("Resultant array is\n");
 
   for (i = 0; i <= n; i++)
      printf("%d\n", array[i]);
 
   return 0;
}