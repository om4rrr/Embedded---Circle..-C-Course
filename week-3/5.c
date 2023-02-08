#include <stdio.h>
#include <stdlib.h>

// Recursion with a dynamic programming

unsigned long long fib(int n) {

	static unsigned long long fib_arr[94] = { 0, 1};

	if(fib_arr[n] || n == 0) return fib_arr[n];

    fib_arr[n] = fib(n - 1) + fib(n - 2);

	return fib_arr[n];
}

int main()
{
	printf("Note : Maximum Fibonacci Number You Can Get is 93 which equal to (%llu)\n", fib(93));

	int n;
	do {
		printf("Please Enter nth Fibonacci in range (0:93) : ");
		scanf("%d", &n);
	} while(n < 0 || n > 93);

	printf("fib(%d) --> %llu\n", n, fib(n));
    return 0;
}

