#include<stdio.h>
#include<conio.h>
int main()
{
	int N,K;
            clrscr();
	printf("\nEnter the number N,K");
	scanf("%d%d",&N,&K);
            N=N^K;
	printf("The answer is:%d",N);
	getch();
}
