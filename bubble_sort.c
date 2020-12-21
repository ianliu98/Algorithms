#include <stdio.h>

/* bubble sort --> compare adjacent elements, interchange them if they are in the wrong order */

int sequence[7] = {15, 899, 435, -45, 78, 0, 167};
int length = 7;
void bubble_sort(int *, int);

int main()
{
	int i;
	printf("The original sequence is: \n");
	for (i=0; i<length; ++i)
		printf("%d ", sequence[i]);
	printf("\n");

	bubble_sort(sequence, length);

	printf("Sorted sequence is: \n");
        for (i=0; i<length; ++i)
                printf("%d ", sequence[i]);
        printf("\n");
}

void bubble_sort(int *sequence, int length)
{
	int i, inter;
	while(1)
	{
		int tmp = 0;
		for (i=1; i<length; ++i)
		{
			if (sequence[i-1]>sequence[i])
			{
				inter = sequence[i-1];
				sequence[i-1] = sequence[i];
				sequence[i] = inter;
				++tmp;
			}
		}
		if (tmp == 0)
			break;
	}
}
