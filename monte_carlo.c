#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	double a, b, r, pi;
	int n, count = 0;

	scanf("%d", &n);
	for (size_t i = 0; i < n; i++)
	{
		a = (double)rand() / RAND_MAX;
		b = (double)rand() / RAND_MAX;
		if (a * a + b * b <= 1)
			count++;
	}

	pi = (double)count / n * 4;
	printf("%lf", pi);

	return 0;
}
