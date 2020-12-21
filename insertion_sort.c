#include <stdio.h>

/* insertion sort --> compare an element with elements before it and insert to the right place */

int sequence[7] = {15, 899, 435, -45, 78, 0, 167};
int length = 7;

int main()
{
	int sorted[length], i, j, k;

	sorted[0] = sequence[0];
	for (i=1; i<length; ++i)
	{
		for (j=0; j<i; ++j)
		{
			if (sequence[i] < sorted[j])
			{
				for (k=i; k>j; --k)
					sorted[k] = sorted[k-1];
				sorted[j] = sequence[i];
				break;
			}
			else
				sorted[i] = sequence[i];
		}
	}

	printf("Sorted sequence is: \n");
	for (i=0; i<length; ++i)
		printf("%d ",sorted[i]);
	printf("\n");

	return 0;
}

