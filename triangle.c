#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	double a[3];
	int times, count = 0;

	scanf("%d", &times);
	for (size_t i = 0; i < times; i++)
	{
		double m = 0, n = 0;
		a[0] = (double)rand() / RAND_MAX;
		a[1] = (double)rand() / RAND_MAX;
		a[2] = (double)rand() / RAND_MAX;

		for (size_t j = 0; j < 3; j++)
		{
			if (a[j] > m)
			{
				n += m;
				m = a[j];
			}
			else
			{
				n += a[j];
			}
		}

		if (n > m)
			count++;
	}

	printf("%lf", (double)count / times);

	return 0;
}
