#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int step = 31,
		times,
		count = 0;
	scanf("%d", &times);

	for (size_t i = 0; i < times; i++)
	{
		int coord[] = {0, 0};
		for (size_t j = 0; j < step; j++)
		{
			switch (rand() & 0b11)
			{
			case 0:
				coord[0]++;
				break;
			case 1:
				coord[1]++;
				break;
			case 2:
				coord[0]--;
				break;
			case 3:
				coord[1]--;
				break;
			}
		}

		if (coord[0] == -4 && coord[1] == 5)
			count++;
	}

	printf("%lf", (double)count / times);

	return 0;
}
