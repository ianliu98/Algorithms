#include <stdio.h>

/* linear search --> output: position of target */

void linear_search(int *sequence, int length, int target)
{
	int i, position[length], j=0;

	for (i=0; i<length; ++i)
	{
		if (sequence[i] == target)
			position[j] = i;
		++j;
	}

	printf("The positions of target %d are : \n", target);
	int k;
	for (k=0; k<j; ++k)
		if (position[k]==0)
			;
		else
			printf("%d ",position[k]);
	printf("\n");
}
