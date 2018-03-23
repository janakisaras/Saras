#include<stdio.h>
#include<conio.h>
int main()
{
    float principle, rate, time, simple_interest;
    clrscr();
    printf("\nEnter the principle :");
    scanf("%f", &principle);
    printf("\nEnter the rate :");
    scanf("%f", &rate);
    printf("\nEnter the time :");
    scanf("%f", &time);
    simple_interest = (principle * rate * time / 100);
    printf("\nSimple interest is %0.2f", simple_interest);
getch();
}
