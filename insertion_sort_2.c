#include <stdio.h>

/* insertion sort --> P208 */

int sequence[7] = {15, 899, 435, -45, 78, 0, 167};
int length = 7;

int main()
{
	int i, j, k, m;

	for (j=1; j<length; ++j)
	{
		i = 0;
		while (sequence[j] > sequence[i])		// use while loop to find position !
			++i;
		m = sequence[j];
		for (k=0; k<j-i; ++k)
			sequence[j-k] = sequence[j-k-1];
		sequence[i] = m;
	}
	printf("Sorted sequence is: \n");
	for (i=0; i<length; ++i)
		printf("%d ",sequence[i]);
	printf("\n");
	return 0;
}
