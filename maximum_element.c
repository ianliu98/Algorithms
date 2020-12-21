#include <stdio.h>

/* Finding the Maximum Element in a Finite Sequence */

int sequence[5] = {10, 15, 27, 89, 11};

int main()
{
	int i, max=sequence[0];

	for (i=1; i<5; ++i)
		if (max < sequence[i])
			max = sequence[i];
	printf("The maximum element is: %d\n", max);

	return 0;
}
