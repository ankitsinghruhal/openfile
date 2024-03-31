#include<stdio.h>

int main()
{
   int row,column,i,j,array[100][100],count = 0;
   
   printf("Enter row : ");
   scanf("%d",&row);
   printf("Enter Column : ");
   scanf("%d",&column);
   printf("Enter the elements of Matrix : ");
   for(i = 0; i < row; i++)
   {
      for(j = 0; j < column; j++)
      {
         scanf("%d",&array[i][j]);
      }
   }
   printf("Elements are:");
   for(i = 0; i < row; i++)
   {
      for(j = 0; j < column; j++)
      {
         printf("%d\t",array[i][j]);
      }
      printf("\n");
   }
   for(i = 0; i < row; i++)
   {
      for(j = 0; j < column; j++)
      {
         if(array[i][j] == 0)
            count++;
      }
   }
   if(count > ((row * column)/2))
   {
      printf("Matrix is sparse matrix ");
   }
   else
   {
      printf("Matrix is not sparse matrix ");
   }
}