#include <stdio.h>

/* This is the main entry function */

void linear_search(int *, int, int);
void binary_search(int *, int, int);
void binary_search_2(int *, int, int);

int main()
{
	//int length=7, sequence[7] = {19, 34, 66, 89, 34, 356, 11}, target=34;
	//linear_search(sequence, length, target);

	int length=16, sequence[16] = {1,2,3,5,6,7,8,10,12,13,15,16,18,19,20,22}, target=0;
	binary_search_2(sequence, length, target);
	return 0;
}
