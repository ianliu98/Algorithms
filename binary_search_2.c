#include <stdio.h>

/* binary search p206 */

void binary_search_2(int *sequence, int length, int target)
{
	int i=0, j=length-1, m;

	while(i<j)
	{
		m = (i+j)/2;
		if (target > sequence[m])
			i = m + 1;
		else
			j = m;
	}
	if (target = sequence[i])
		printf("The position of target is: %d\n", i);
	else
		printf("target not found!\n");
}
