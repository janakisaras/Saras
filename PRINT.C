#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	clrscr();
	printf("\nEnter the number a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	a=(a*b%c);
	printf("The answer is:%d",a);
	getch();
}
