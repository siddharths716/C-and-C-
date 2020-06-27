#include<stdio.h>
int fib(int n)
{
	if (n==1)
	return 0;
	if (n==2)
	return 1;
	return fib(n-1)+fib(n-2);
}
int main()
{
	int n,i;
	printf("enter the number the series should continue till: ");
	scanf("%d",&n);
	printf("\n fibonacci series");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",fib(i));
	}
	return 0;
} 
