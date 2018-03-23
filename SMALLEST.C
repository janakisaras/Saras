#include <stdio.h>
#include<conio.h>
  int main() 
  {
    int a[10];
    int s;
    int smallest;
    clrscr();
    printf("Enter ten values:");
    
    for (s = 0; s < 10; s++) 
    {
    scanf("%d", &a[s]);
    }
    smallest = a[0];
    for (s = 0; s < 10; s++)
    {
if (a[s] < smallest) 
{
smallest = a[s];
    }
    }
    printf("smallest of ten numbers is %d", smallest);
    getch();
  }
