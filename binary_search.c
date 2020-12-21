#include <stdio.h>

/* binary search --> input sequence needs to be an increasing order */

void binary_search(int *sequence, int length, int target)
{
	int lower=0, upper=length;
	
	printf("lower: %d  upper: %d  target: %d \n",sequence[lower], sequence[upper-1], target);

	if (target<sequence[lower] || target>sequence[upper-1])
	{
		printf("target is not in the sequence!\n");
	}
	if (target>=sequence[lower] && target<=sequence[upper-1])
	{
		while (sequence[(lower+upper)/2]!=target)
		{
			if (sequence[(lower+upper)/2] > target)
				upper = (lower+upper)/2;
			if (sequence[(lower+upper)/2] < target)
				lower = (lower+upper)/2;
		}
		printf("The position of target is(0~%d): %d \n", length-1, (lower+upper)/2);
	}
}
