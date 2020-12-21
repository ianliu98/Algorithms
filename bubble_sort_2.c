#include <stdio.h>

/* bubble sort --> P208 */

int sequence[7] = {15, 899, 435, -45, 78, 0, 167};
int length = 7;

int main()
{
	int i, j, inter, k;
	for (i=0; i<length-1; ++i)
		for (j=1; j<(length-i); ++j)	// decrease iteration range
		{
			if (sequence[j-1] > sequence[j])
			{
				inter = sequence[j-1];
				sequence[j-1] = sequence[j];
				sequence[j] = inter;
			}
		}
	printf("Sorted squence is: \n");
	for (k=0; k<length; ++k)
		printf("%d ",sequence[k]);
	printf("\n");

	return 0;
}
