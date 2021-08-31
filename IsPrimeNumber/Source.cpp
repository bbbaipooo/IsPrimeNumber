#include<stdio.h>

int isPrime(int);
int main()
{
	int n;
	scanf_s("%d", &n);
	if (isPrime(n) == 1)
		printf("Prime Number");
	else
		printf("Not Prime Number");
	return 0;
}
int isPrime(int x)
{
	int b = 0,a=2;
	while (a <= x)
	{
		if (x % a == 0)
		{
			b = b + 1;
		}
		a++;
	}
	if (b == 1)
		return 1;
	else
		return 0;
}