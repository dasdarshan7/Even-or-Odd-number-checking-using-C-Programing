// Program in C to check a number, if its even or odd
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf(" Enter a number to check, if its even or odd: ");
	scanf("%d", &n);
	if(n%2==0)
	printf(" %d is an even number",n);
	else
	printf(" %d is an odd number",n);
}
