#include <stdio.h>
#include<conio.h>
void sort_numbers_ascending(int number[], int count)
{
   int temp, s, j, l;
   for (j = 0; j < count; ++j)
   {
      for (l = j + 1; l < count; ++l)
      {
         if (number[j] > number[l])
         {
            temp = number[j];
            number[j] = number[l];
            number[l] = temp;
         }
      }
   }
   printf("\nNumbers in ascending order:\n");
   for (s = 0; s < count; ++s)
      printf("%d\n", number[s]);
}
void main()
{
   int s, count, number[20];
   clrscr();
   printf("\nHow many numbers you are gonna enter:");
   scanf("%d", &count);
   printf("\nEnter the numbers one by one:");
   
   for (s = 0; s < count; ++s)
      scanf("%d", &number[s]);
 
   sort_numbers_ascending(number, count);
   getch();
}
