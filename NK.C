#include<stdio.h>
#include<conio.h>
int main()
{
	int N,K;
	clrscr();
	printf("\nEnter the number");
	scanf("%d",&N);
	printf("\nEnter the number");
	scanf("%d",&K);
	N*=K;
	K*=N;
	printf("\nThe value is:%d");
	getch();
	
}
